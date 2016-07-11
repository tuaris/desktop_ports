# New ports collection makefile for: gnome settings in live mode
# Date created:        11 may 2015
# Whom:                angelescuo@yahoo.com
#
# $FreeBSD$
#

PORTNAME= 	ghostbsd-slim-theme
PORTVERSION=	1.0
CATEGORIES=	x11

MAINTAINER=	angelescuo@yahoo.com
COMMENT=	GhostBSD theme for slim and autologin too
LICENSE =	BSD

USE_GITHUB=	yes
GH_ACCOUNT=	GhostBSD

RUN_DEPENDS=	slim:${PORTSDIR}/x11/slim

NO_BUILD=	yes

do-install:
	@${MKDIR} -p ${STAGEDIR}/${PREFIX}/share/slim/themes/ghostbsd
	@${CP} -R   ${WRKSRC}/gbsd/* ${STAGEDIR}/${PREFIX}/share/slim/themes/ghostbsd/
.include <bsd.port.mk>
