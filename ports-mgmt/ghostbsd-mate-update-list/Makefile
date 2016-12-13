# Created by: Eric Turgeon <ericturgeon.bsd@gmail.com>

PORTNAME=	ghostbsd-mate-update-list
PORTVERSION=	1.0
CATEGORIES=	ports-mgmt

MAINTAINER=	ericturgeon.bsd@gmail.com
COMMENT=	List of ghostbsd specific update for mate

LICENSE=	BSD

USE_GITHUB=	yes
GH_ACCOUNT=	GhostBSD

NO_BUILD=	yes

do-install:
	${MKDIR} ${STAGEDIR}${PREFIX}/etc/default
	${CP} -PR ${WRKSRC}/ghostbsd-mate-update-list ${STAGEDIR}${PREFIX}/etc/default/
.include <bsd.port.mk>

