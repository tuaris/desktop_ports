# New ports collection makefile for: ghostbsd-bug-report
# Date created:        Saturday, January 02 2016
# Whom:                ericturgeon@ghostbsd.com
#
# $FreeBSD$
#

PORTNAME=	fbsdupdatecheck
PORTVERSION=	0.1
CATEGORIES=	sysutils


MAINTAINER=	ericturgeon@ghostbsd.com
COMMENT= GhostBSD bug report tool
LICENSE = BSD

USE_GITHUB=	yes
GH_ACCOUNT=	GhostBSD

NO_BUILD=	yes 

do-install:
		@${INSTALL_DATA} ${WRKSRC}/fbsdupdatecheck ${STAGEDIR}${PREFIX}/sbin

.include <bsd.port.mk>
