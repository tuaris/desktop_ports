# Created by: Daniel Morante <daniel@morante.net>
# $FreeBSD: $

PORTNAME=	python-caja
PORTVERSION=	1.24.0
CATEGORIES=	deskutils mate
MASTER_SITES=	MATE
DIST_SUBDIR=	mate

MAINTAINER=	gnome@FreeBSD.org
COMMENT=	Caja-Python Components

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

USES=		compiler:c11 gmake mate libtool localbase:ldflags \
		pathfix pkgconfig python:3.6+ tar:xz

OPTIONS_DEFINE=	NLS
NLS_USES=	gettext

USE_MATE=	caja desktop
USE_GNOME=	cairo gdkpixbuf2 gtk30 intltool pygobject3
USE_LDCONFIG=	yes
GNU_CONFIGURE=	yes
INSTALL_TARGET=	install-strip

.include <bsd.port.mk>
