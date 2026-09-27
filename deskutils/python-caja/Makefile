PORTNAME=	python-caja
DISTVERSION=	1.28.0
CATEGORIES=	deskutils mate
MASTER_SITES=	https://github.com/mate-desktop/${PORTNAME}/releases/download/v${DISTVERSION}/
DIST_SUBDIR=	mate

MAINTAINER=	gnome@FreeBSD.org
COMMENT=	Python bindings for the caja extension library
WWW=		https://mate-desktop.org/

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

LIB_DEPENDS=	libharfbuzz.so:print/harfbuzz

USES=		compiler:c11 gmake gnome libtool localbase:ldflags mate \
		pathfix pkgconfig python tar:xz
USE_MATE=	caja
USE_GNOME=	cairo gdkpixbufextra glib20 gtk30 intltool pango pygobject3
USE_LDCONFIG=	yes
GNU_CONFIGURE=	yes
INSTALL_TARGET=	install-strip

PORTSCOUT=	site:https://github.com/mate-desktop/python-caja/releases/ \
		limitw:1,even

OPTIONS_DEFINE=	DOCS NLS
OPTIONS_SUB=	yes
NLS_USES=	gettext

.include <bsd.port.mk>
