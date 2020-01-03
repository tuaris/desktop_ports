# Created by: Daniel Morante <daniel@morante.net>
# $FreeBSD: $

PORTNAME=	python-caja
PORTVERSION=	1.22.1
CATEGORIES=	deskutils mate
MASTER_SITES=	MATE
DIST_SUBDIR=	mate

MAINTAINER=	gnome@FreeBSD.org
COMMENT=	Caja-Python Components

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

PORTSCOUT=	limitw:1,even

USES=		compiler:c11 gettext gmake gnome libtool localbase mate \
		pathfix pkgconfig python:2.7 tar:xz
USE_MATE=	caja desktop
USE_GNOME=	cairo gdkpixbuf2 gtk30 intltool pygobject3
USE_LDCONFIG=	yes
GNU_CONFIGURE=	yes
INSTALL_TARGET=	install-strip

post-patch:
	@${REINPLACE_CMD} -e 's|gupnp-1.0|gupnp-1.2|' ${WRKSRC}/configure

.include <bsd.port.mk>
