# New ports collection makefile for: GhostBSD settings for grub2
# Date created:        11 may 2015
# Whom:                angelescuo@yahoo.com
#
# $FreeBSD$
#

PORTNAME= 	ghostbsd-grub2-settings
PORTVERSION=	1.0
CATEGORIES=	x11

MAINTAINER=	angelescuo@yahoo.com
COMMENT=	GhostBSD grub2 settings
LICENSE =	BSD

USE_GITHUB=	yes
GH_ACCOUNT=	GhostBSD
GH_PROJECT=	${PORTNAME}
GH_TAGNAME=	${PORTVERSION}
GH_COMMIT=	f565c08

NO_BUILD=	yes

do-install:
	@${MKDIR} -p ${STAGEDIR}/boot/grub/themes/ghostbsd
	@${CP} -R   ${WRKSRC}/* ${STAGEDIR}/
.include <bsd.port.mk>
