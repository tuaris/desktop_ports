# New ports collection makefile for: update-station
# Date created:        Sunday, April 17 2016
# Whom:                ericturgeon@ghostbsd.com
#
# $FreeBSD$
#

PORTNAME=	update-station
PORTVERSION=	1.5
CATEGORIES=	ports-mgmt
MASTER_SITES=	https://github.com/GhostBSD/${PORTNAME}/archive/

MAINTAINER=	ericturgeon@ghostbsd.com
COMMENT= Tool to update FreeBSD/GhostBSD software and system.
LICENSE = BSD

RUN_DEPENDS=    doas:security/doas

USES = python:2.7
USE_GITHUB=	yes
GH_ACCOUNT=	GhostBSD

USE_PYTHON=	distutils
USE_GNOME=	pygtk2

.include <bsd.port.mk>
