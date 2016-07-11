# New ports collection makefile for: ghostbsd common settings in live mode
# Date created:        5 july 2015
# Whom:                angelescuo@yahoo.com
#
# $FreeBSD$
#

PORTNAME= 	ghostbsd-live-common-settings
PORTVERSION=	1.6
CATEGORIES=	x11

MAINTAINER=	angelescuo@yahoo.com
COMMENT=	GhostBSD common settings in live mode
LICENSE =	BSD

USE_GITHUB=	yes
GH_ACCOUNT=	GhostBSD


NO_BUILD=	yes
RUN_DEPENDS= dpkg:${PORTSDIR}/archivers/dpkg \
		sudo:${PORTSDIR}/security/sudo

do-install:
	@${MKDIR} -p ${STAGEDIR}/${PREFIX}/share/ghostbsd
	@${CP} -R   ${WRKSRC}/ghostbsd/* ${STAGEDIR}/${PREFIX}/share/ghostbsd
	@${MKDIR} -p ${STAGEDIR}/${PREFIX}/etc/polkit-1
	@${CP} -R   ${WRKSRC}/etc/polkit-1/* ${STAGEDIR}/${PREFIX}/etc/polkit-1
.include <bsd.port.mk>
