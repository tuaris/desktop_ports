#
# $FreeBSD$
#

PORTNAME=	xfce-installed-settings
PORTVERSION=	3.0
CATEGORIES=	x11

MAINTAINER=	angelescuo@yahoo.com
COMMENT=	GhostBSD xfce settings in installed mode

LICENSE=	BSD

USE_GITHUB=	yes
GH_ACCOUNT=	GhostBSD
GH_PROJECT=	ghostbsd-xfce-settings

NO_BUILD=	yes


do-install:
	${MKDIR} ${STAGEDIR}/${PREFIX}/share/ghostbsd/xfce-installed-settings/etc/xdg
	${CP} -R   ${WRKSRC}/etc/xdg/* ${STAGEDIR}/${PREFIX}/share/ghostbsd/xfce-installed-settings/etc/xdg
.include <bsd.port.mk>
