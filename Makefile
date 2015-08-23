# Makefile for the Undernet IRC Daemon.
# Copyright (C) 1997, Carlo Wood <carlo@runaway.xs4all.nl>

# This program is free software; you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation; either version 2, or (at your option)
# any later version.

# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.

# You should have received a copy of the GNU General Public License
# along with this program; if not, write to the Free Software
# Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA
# 02111-1307, USA.

#### Start of system configuration section. ####

prefix = /usr/home/devnet/ircd
srcdir = .


SHELL = /bin/sh
RM = /bin/rm
AWK = nawk

#### End of system configuration section. ####

SUBDIRS = ircd ircd/test
IRCD_MAKEFILES = Makefile ircd/Makefile ircd/test/Makefile

all: build

.PHONY: server build depend install config update diff patch export update
# Some versions of make give a warning when this is empty:
.SUFFIXES: .dummy

build: ${IRCD_MAKEFILES}
	@for i in ${SUBDIRS}; do \
		echo "Building $$i..."; \
		cd $$i; ${MAKE} build; cd ..; \
	done

config:
	@echo "*************************************************************"
	@echo "* The \"make config\" step is now DEPRECATED.  Most           *"
	@echo "* server options are now configurable via the configuration *"
	@echo "* file using F-lines; the rest are specified on the command *"
	@echo "* line to \"./configure\".  To aid the transition, a shell    *"
	@echo "* script has been provided to generate the necessary        *"
	@echo "* configuration lines for you.  You may run this script by  *"
	@echo "* typing \"tools/transition\"; please pay attention to its    *"
	@echo "* output.  This message will be removed for the next major  *"
	@echo "* release of ircu.                                          *"
	@echo "*************************************************************"

root-clean:
	@for i in '*.orig' '.*.orig' '*.rej' '.*.rej' '\#*' '*~' '.*~' '*.bak' '.*.bak' core; do\
		echo "Removing $$i"; \
		REMOVE_FILES="`find . -name "$$i" -print`"; \
		test -n "$$REMOVE_FILES" && ${RM} -f $$REMOVE_FILES; \
	done || true

sub-clean: ${IRCD_MAKEFILES}
	@for i in ${SUBDIRS}; do \
		echo "Cleaning $$i..."; \
		cd $$i; ${MAKE} clean; cd ..;\
	done

clean: root-clean sub-clean

root-distclean: root-clean
	@for i in '*.rej'; do \
		echo "Removing $$i"; \
		REMOVE_FILES="`find . -name "$$i" -print`"; \
		test -n "$$REMOVE_FILES" && ${RM} -f $$REMOVE_FILES; \
	done || true

sub-distclean: ${IRCD_MAKEFILES}
	@for i in ${SUBDIRS}; do \
		echo "Dist-cleaning $$i..."; \
		cd $$i; ${MAKE} distclean; cd ..;\
	done

distclean: root-distclean sub-distclean
	${RM} -f Makefile config.h config.log config.cache config.status \
		stamp-h include/patchlist.h
	${RM} -rf patches/marks

maintainer-clean: root-distclean ${IRCD_MAKEFILES}
	@for i in ${SUBDIRS}; do \
		echo "maintainer-cleaning $$i..."; \
		cd $$i; ${MAKE} maintainer-clean; cd ..;\
	done

depend: ${IRCD_MAKEFILES}
	@for i in ${SUBDIRS}; do \
		echo "Making dependencies in $$i..."; \
		cd $$i; ${MAKE} depend; cd ..; \
	done

install: ${IRCD_MAKEFILES}
	test -d ${prefix} || mkdir ${prefix}
	@for i in ${SUBDIRS}; do \
		echo "Installing $$i..."; \
		cd $$i; ${MAKE} install; cd ..; \
	done

uninstall: ${IRCD_MAKEFILES}
	@for i in ${SUBDIRS}; do \
		echo "Uninstalling $$i..."; \
		cd $$i; ${MAKE} uninstall; cd ..; \
	done

${srcdir}/aclocal.m4: acinclude.m4
	cd ${srcdir} && aclocal

${srcdir}/configure: configure.in aclocal.m4
	cd ${srcdir} && autoconf

# autoheader might not change config.h.in, so touch a stamp file.
${srcdir}/config.h.in: stamp-h.in
${srcdir}/stamp-h.in: configure.in aclocal.m4 acconfig.h
	cd ${srcdir} && autoheader
	echo timestamp > ${srcdir}/stamp-h.in

config.h: stamp-h
stamp-h: config.h.in config.status
	./config.status

Makefile: Makefile.in config.status
	./config.status

ircd/Makefile: ircd/Makefile.in config.status
	./config.status

ircd/test/Makefile: ircd/test/Makefile.in config.status
	./config.status

config.status: configure
	./config.status --recheck

# Some versions of 'make' do not support the .PHONY target :
FORCE:

# Indent all headers and source files:
indent:
	@test "`indent --version`" = "GNU indent 2.1.0" || \
	  (echo "You need GNU indent 2.1.0; See doc/readme.indent" && exit -1);
	VERSION_CONTROL=none indent include/*.h ircd/*.c

# do a cvs update
update:
	cvs -z9 update
