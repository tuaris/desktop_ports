# New ports collection makefile for: GhostBSD settings for grub2
# Date created:        5 jun 2015
# Whom:                angelescuo@yahoo.com
#
# $FreeBSD$
#

PORTNAME= 	ghostbsd-grub2-settings
PORTVERSION=	1.1
CATEGORIES=	x11

MAINTAINER=	angelescuo@yahoo.com
COMMENT=	GhostBSD grub2 settings
LICENSE =	BSD

USE_GITHUB=	yes
GH_ACCOUNT=	GhostBSD
GH_PROJECT=	${PORTNAME}
GH_TAGNAME=	${PORTVERSION}
GH_COMMIT=	63181f9

NO_BUILD=	yes

RUN_DEPENDS=	grub-mkconfig:${PORTSDIR}/sysutils/grub2

do-install:
	@${MKDIR} -p ${STAGEDIR}/boot/grub/themes/ghostbsd
	@${CP} -R   ${WRKSRC}/* ${STAGEDIR}/
.include <bsd.port.mk>
