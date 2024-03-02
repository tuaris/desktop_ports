PORTNAME=	caja-actions
PORTVERSION=	1.26.0
CATEGORIES=	deskutils mate
MASTER_SITES=	MATE
DIST_SUBDIR=	mate

MAINTAINER=	gnome@FreeBSD.org
COMMENT=	Caja-actions extension for Caja file manager
WWW=	https://mate-desktop.org/

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

BUILD_DEPENDS=	itstool:textproc/itstool

USES=		compiler:c11 gmake mate libtool localbase:ldflags \
			pathfix pkgconfig tar:xz

OPTIONS_DEFINE=	DOCS NLS
NLS_USES=	gettext

USE_MATE=	caja desktop
USE_GNOME=	cairo gtk30 intltool libxml2 gdkpixbuf2 glib20
USE_LDCONFIG=	yes
GNU_CONFIGURE=	yes
INSTALL_TARGET=	install-strip

.include <bsd.port.mk>
