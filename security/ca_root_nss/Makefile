# $FreeBSD: head/security/ca_root_nss/Makefile 519266 2019-12-08 00:51:48Z jbeich $

PORTNAME=	ca_root_nss
PORTVERSION=	${VERSION_NSS}
PORTREVISION=	1
CATEGORIES=	security
MASTER_SITES=	MOZILLA/security/nss/releases/${DISTNAME:tu:C/[-.]/_/g}_RTM/src \
				https://cdn.pacyworld.com/pacyworld.com/ca/:pacyworld
DISTFILES=		${DISTNAME}${EXTRACT_SUFX} \
				ca-pacyworld.com.txt:pacyworld ca-pacyworld_root.txt:pacyworld

DISTNAME=	nss-${VERSION_NSS}${NSS_SUFFIX}

MAINTAINER=	ports-secteam@FreeBSD.org
COMMENT=	Root certificate bundle from the Mozilla Project

LICENSE=	MPL20

OPTIONS_DEFINE=		ETCSYMLINK
OPTIONS_DEFAULT=	ETCSYMLINK

OPTIONS_SUB=		yes

ETCSYMLINK_DESC=	Add symlink to /etc/ssl/cert.pem
ETCSYMLINK_CONFLICTS_INSTALL=	ca-roots-[0-9]*

USES=		perl5 ssl:build
USE_PERL5=	build
NO_ARCH=	yes
NO_WRKSUBDIR=	yes

CERTDIR?=	share/certs
PLIST_SUB+=	CERTDIR=${CERTDIR}

# !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
# !!!  These versions are intended to track security/nss.        !!!
# !!!  Please DO NOT submit patches for new version until it has !!!
# !!!  been committed there first.                               !!!
# !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
VERSION_NSS=	3.48
#NSS_SUFFIX=	-with-ckbi-1.98
CERTDATA_TXT_PATH=	nss-${VERSION_NSS}/nss/lib/ckfw/builtins/certdata.txt
CERTDATA_PACYCOMCA_TXT=	ca-pacyworld.com.txt
CERTDATA_PACYWORLD_TXT=	ca-pacyworld_root.txt
BUNDLE_PROCESSOR=	MAca-bundle.pl

SUB_FILES=	MAca-bundle.pl pkg-message
SUB_LIST=	VERSION_NSS=${VERSION_NSS}

do-extract:
	@${MKDIR} ${WRKDIR}
	@${TAR} -C ${WRKDIR} -xf ${DISTDIR}/nss-${VERSION_NSS}${NSS_SUFFIX}${EXTRACT_SUFX} \
	    ${CERTDATA_TXT_PATH}
	@${CP} ${WRKDIR}/${CERTDATA_TXT_PATH} ${WRKDIR}
	@${RM} -r ${WRKDIR}/nss-${VERSION_NSS}
	@${CP} ${DISTDIR}/${CERTDATA_PACYCOMCA_TXT} ${WRKDIR}
	@${CP} ${DISTDIR}/${CERTDATA_PACYWORLD_TXT} ${WRKDIR}

merge-pacyworld:
	@${CAT} ${WRKDIR}/${CERTDATA_PACYCOMCA_TXT} ${WRKDIR}/${CERTDATA_PACYWORLD_TXT} >> ${WRKDIR}/certdata.txt

do-build:	apply-slist merge-pacyworld
	@${SETENV} PATH=${LOCALBASE}/bin:$${PATH} \
		${PERL} ${WRKDIR}/${BUNDLE_PROCESSOR} \
	    < ${WRKDIR}/certdata.txt > \
	    ${WRKDIR}/ca-root-nss.crt

do-install:
	${MKDIR} ${STAGEDIR}${PREFIX}/${CERTDIR}
	${INSTALL_DATA} ${WRKDIR}/ca-root-nss.crt ${STAGEDIR}${PREFIX}/${CERTDIR}
	${MKDIR} ${STAGEDIR}${PREFIX}/etc/ssl
	${LN} -sf ${PREFIX}/${CERTDIR}/ca-root-nss.crt ${STAGEDIR}${PREFIX}/etc/ssl/cert.pem.sample
	${MKDIR} ${STAGEDIR}${PREFIX}/openssl
	${LN} -sf ${PREFIX}/${CERTDIR}/ca-root-nss.crt ${STAGEDIR}${PREFIX}/openssl/cert.pem.sample

do-install-ETCSYMLINK-on:
	${MKDIR} ${STAGEDIR}/etc/ssl
	${LN} -sf ${PREFIX}/${CERTDIR}/ca-root-nss.crt ${STAGEDIR}/etc/ssl/cert.pem

.include <bsd.port.mk>