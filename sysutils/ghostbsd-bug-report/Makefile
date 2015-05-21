# New ports collection makefile for: ghostbsd-bug-report
# Date created:        22 september 2012
# Whom:                mrhsaacdoh@gmail.com
#
# $FreeBSD$
#

PORTNAME=	ghostbsd-bug-report
PORTVERSION=	1.0
CATEGORIES=	sysutils


MAINTAINER=	angelescuo@yahoo.com
COMMENT= GhostBSD bug report tool
LICENSE = BSD

USE_GITHUB=	yes
GH_ACCOUNT=	GhostBSD
GH_PROJECT=	${PORTNAME}
GH_TAGNAME=	${PORTVERSION}
GH_COMMIT=	ebe598c

NO_BUILD=	yes

RUN_DEPENDS=	xdg-open:${PORTSDIR}/devel/xdg-utils 

do-install:
		@${INSTALL_DATA} ${WRKSRC}/applications/ghostbsd-bug-report.desktop ${STAGEDIR}${PREFIX}/share/applications
		@${MKDIR} -p ${STAGEDIR}${PREFIX}/share/pixmaps
		@${CP} -R   ${WRKSRC}/icons/pixmaps/* ${STAGEDIR}${PREFIX}/share/pixmaps
		@${MKDIR} -p ${STAGEDIR}${PREFIX}/share/icons/hicolor
		@${CP} -R   ${WRKSRC}/icons/hicolor/* ${STAGEDIR}${PREFIX}/share/icons/hicolor

.include <bsd.port.mk>
