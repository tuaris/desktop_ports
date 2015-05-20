# New ports collection makefile for: ghostbsd wallpaers
# Date created:        17 may 2015
# Whom:                angelescuo@yahoo.com
#
# $FreeBSD$
#

PORTNAME=	ghostbsd-icons
PORTVERSION=	1.0
CATEGORIES=	x11-themes

MAINTAINER=	angelescuo@yahoo.com
COMMENT= GhostBSD icons for mate flavour
LICENSE = BSD

USE_GITHUB=	yes
GH_ACCOUNT=	GhostBSD
GH_PROJECT=	${PORTNAME}
GH_TAGNAME=	${PORTVERSION}
GH_COMMIT=	19b2083

NO_BUILD=	yes

do-install:
	@${MKDIR} -p ${STAGEDIR}${PREFIX}/share/icons/
	@${CP} -R ${WRKSRC}/icons/* ${STAGEDIR}${PREFIX}/share/icons
.include <bsd.port.mk>
