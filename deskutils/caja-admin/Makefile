PORTNAME=	caja-admin
PORTVERSION=	0.0.5
CATEGORIES=	deskutils mate
DIST_SUBDIR=	mate

MAINTAINER=	gnome@FreeBSD.org
COMMENT=	Caja Admin extension
WWW=	https://github.com/infirit/caja-admin

LICENSE=	GPLv3
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	${LOCALBASE}/lib/caja/extensions-2.0/libcaja-python.so:deskutils/python-caja

USES=		meson mate python pathfix

USE_GITHUB=	yes
GH_ACCOUNT=	infirit

OPTIONS_DEFINE=	NLS
NLS_USES=	gettext

USE_MATE=	caja desktop polkit

.include <bsd.port.mk>
