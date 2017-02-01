# Created by: Eric Turgeon <ericturgeon.bsd@gmail.org>
# $FreeBSD: net-mgmt/networkmgr/Makefile 1 Tuesday, January 31 2017 eric $

PORTNAME=	networkmgr
PORTVERSION=	2.2
CATEGORIES=	net-mgmt
MASTER_SITES=	http://github.com/GhostBSD/${PORTNAME}/archive/

MAINTAINER=	ericturgeon.bsd@gmail.com
COMMENT=	FreeBSD/GhostBSD network conection manager

LICENSE=	BSD

RUN_DEPENDS=    doas:security/doas

USE_GITHUB=	yes
GH_ACCOUNT=	GhostBSD

USES = python:2
USE_PYTHON=	distutils
USE_GNOME=	pygtk2

.include <bsd.port.mk>
