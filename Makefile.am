ACLOCAL_AMFLAGS = -I m4 ${ACLOCAL_FLAGS}

SUBDIRS = data libgiggle libgiggle-git plugins src po pixmaps help test

INTLTOOL = \
	intltool-extract.in \
	intltool-merge.in \
	intltool-update.in

EXTRA_DIST = \
	$(INTLTOOL)

DISTCLEANFILES = \
	intltool-extract \
	intltool-merge \
	intltool-update

AM_DISTCHECK_CONFIGURE_FLAGS = \
	--disable-scrollkeeper
