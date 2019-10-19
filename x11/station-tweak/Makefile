# Created by:	Eric Turgeon ericturgeon@ghostbsd.org
# Date created:	November 11 2013


PORTNAME=	station-tweak
PORTVERSION=	0.3
PORTREVISION=	2
CATEGORIES=	x11
MASTER_SITES=	https://github.com/GhostBSD/${PORTNAME}/archive/

MAINTAINER=	ericturgeon@ghostbsd.org
COMMENT=	Mate configuration system.

LICENSE=	BSD

USE_GITHUB=	yes
GH_ACCOUNT=	GhostBSD

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}python-distutils-extra>=2.15:devel/py-python-distutils-extra

RUN_DEPENDS=	wmctrl:x11/wmctrl \
		plank:x11/plank \
		${PREFIX}/libexec/brisk-menu:x11/brisk-menu

USES=		python:2.7 gettext-tools
USE_PYTHON=	distutils
USE_GNOME=	pygobject3 intltool dconf
USE_MATE= 	panel

.include <bsd.port.mk>
