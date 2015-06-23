# New ports collection makefile for: inxi console and irc script
# Date created:        23 june 2015
# Whom:                angelescuo@yahoo.com
#
# $FreeBSD$
#

PORTNAME= 	inxi
PORTVERSION=	2.2.25
CATEGORIES=	sysutils

MAINTAINER=	angelescuo@yahoo.com
COMMENT=	GhostBSD inxi console and irc script
LICENSE =	GPLv3

USE_GITHUB=	yes
GH_ACCOUNT=	GhostBSD

MAN1=		inxi.1
NO_BUILD=	yes

RUN_DEPENDS=	gawk:${PORTSDIR}/lang/gawk

do-install:
	@${INSTALL_SCRIPT} ${WRKSRC}/src/* ${STAGEDIR}/${PREFIX}/bin
	@${INSTALL_MAN} ${WRKSRC}/man/* ${STAGEDIR}/${MANPREFIX}/man/man1
	@${MKDIR} -p  ${STAGEDIR}/${PREFIX}/share/changelogs
	@${CP} -R ${WRKSRC}/changelogs/* ${STAGEDIR}/${PREFIX}/share/changelogs
.include <bsd.port.mk>
