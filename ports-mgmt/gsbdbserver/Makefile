# New ports collection makefile for: ghostbsd packages build server settings
# Date created:        1 dec 2015
# Whom:                angelescuo@yahoo.com
#
# $FreeBSD$
#

PORTNAME= 	gbsdbserver
PORTVERSION=	1.0
CATEGORIES=	ports-mgmt

MAINTAINER=	angelescuo@yahoo.com
COMMENT=	GhostBSD packages build server settings
LICENSE =	BSD

USE_GITHUB=	yes
GH_ACCOUNT=	GhostBSD

RUN_DEPENDS=	poudriere:${PORTSDIR}/ports-mgmt/poudriere \
		portmaster:${PORTSDIR}/ports-mgmt/portmaster \
		nginx:${PORTSDIR}/www/nginx

NO_BUILD=	yes

do-install:
		@${MKDIR} -p ${STAGEDIR}${LOCALDIR}${ETCDIR}

.include <bsd.port.mk>
