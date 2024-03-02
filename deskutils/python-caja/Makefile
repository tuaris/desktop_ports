PORTNAME=	python-caja
PORTVERSION=	1.26.0
CATEGORIES=	deskutils mate
MASTER_SITES=	MATE
DIST_SUBDIR=	mate

MAINTAINER=	gnome@FreeBSD.org
COMMENT=	Python bindings for the caja extension library
WWW=	https://mate-desktop.org/

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

LIB_DEPENDS=	libharfbuzz.so:print/harfbuzz

USES=		compiler:c11 gmake mate gnome libtool localbase:ldflags \
			pathfix pkgconfig python:3.6+ tar:xz

OPTIONS_DEFINE=	DOCS NLS
NLS_USES=	gettext

USE_MATE=	caja
USE_GNOME=	cairo glib20 pango gdkpixbuf2 gtk30 intltool pygobject3
USE_LDCONFIG=	yes
GNU_CONFIGURE=	yes
INSTALL_TARGET=	install-strip

.include <bsd.port.mk>
