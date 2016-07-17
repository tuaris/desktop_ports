# New ports collection makefile for: ghostbsd gdm theme/settings
# Date created:        11 may 2015
# Whom:                angelescuo@yahoo.com
#
# $FreeBSD$
#

PORTNAME= 	ghostbsd-gdm-theme
PORTVERSION=	1.0
CATEGORIES=	x11

MAINTAINER=	angelescuo@yahoo.com
COMMENT=	GhostBSD theme for gdm and autologin too
LICENSE =	BSD

USE_GITHUB=	yes
GH_ACCOUNT=	GhostBSD

RUN_DEPENDS=	gdm:${PORTSDIR}/x11/gdm \
		iso_to_hd:${PORTSDIR}/x11/ghostbsd-installed-common-settings

NO_BUILD=	yes

do-install:
	@${MKDIR} -p ${STAGEDIR}/${PREFIX}/etc/gdm
	@${CP} -R   ${WRKSRC}/local/etc/gdm/* ${STAGEDIR}/${PREFIX}/etc/gdm/
	@${MKDIR} -p ${STAGEDIR}/etc/pam.d
	@${CP} -R   ${WRKSRC}/etc/pam.d/* ${STAGEDIR}/etc/pam.d/
	
.include <bsd.port.mk>
