# Created by: Eric Turgeon <ericturgeon.bsd@gmail.com>

PORTNAME=	ghostbsd-xfce-update-list
PORTVERSION=	1.0
CATEGORIES=	ports-mgmt

MAINTAINER=	ericturgeon.bsd@gmail.com
COMMENT=	List of ghostbsd specific update for xfce

LICENSE=	BSD

USE_GITHUB=	yes
GH_ACCOUNT=	GhostBSD

NO_BUILD=	yes

do-install:
	${MKDIR} ${STAGEDIR}${PREFIX}/etc/default
	${CP} -PR ${WRKSRC}/ghostbsd-xfce-update-list ${STAGEDIR}${PREFIX}/etc/default/
.include <bsd.port.mk>

