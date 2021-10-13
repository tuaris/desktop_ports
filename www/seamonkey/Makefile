PORTNAME=	seamonkey
DISTVERSION=	2.53.9.1
PORTREVISION=	1
CATEGORIES?=	www mail news irc
MASTER_SITES=	MOZILLA/${PORTNAME}/releases/${DISTVERSION}/source
DISTFILES=	${DISTNAME}.source${EXTRACT_SUFX}

MAINTAINER=	code@edv.work
COMMENT=	Webbrowser, e-mail, news and feed client, IRC chat, and HTML editing

LIB_DEPENDS=	libv4l2.so:multimedia/libv4l \
		libnspr4.so:devel/nspr \
		libnssutil3.so:security/nss \
		libfreetype.so:print/freetype2 \
		libfontconfig.so:x11-fonts/fontconfig \
		libharfbuzz.so:print/harfbuzz

USES=		tar:xz compiler:c++17-lang cpe gl gmake iconv localbase pkgconfig python:3.6+
USE_GL=		glu
USE_GNOME=	cairo gdkpixbuf2 gtk20 gtk30
USE_XORG=	x11 xcb xcomposite xdamage xext xfixes xrender xt xcursor xi

BUILD_DEPENDS+=	python27>=2.7.18:lang/python27 \
		nspr>=4.26:devel/nspr \
		nss>=3.58:security/nss \
		icu>=67.1,1:devel/icu \
		libevent>=2.1.8:devel/libevent \
		graphite2>=1.3.14:graphics/graphite2 \
		png>=1.6.35:graphics/png \
		libvpx>=1.8.2:multimedia/libvpx \
		${PYTHON_PKGNAMEPREFIX}sqlite3>0:databases/py-sqlite3@${PY_FLAVOR} \
		v4l_compat>0:multimedia/v4l_compat \
		autoconf-2.13:devel/autoconf213 \
		nasm:devel/nasm \
		yasm:devel/yasm \
		zip:archivers/zip \
		${RUST_DEFAULT}>=1.43:lang/${RUST_DEFAULT} \
		${LOCALBASE}/bin/clang${LLVM_DEFAULT}:devel/llvm${LLVM}${LLVM_DEFAULT}

MOZCONFIG?=		${WRKSRC}/.mozconfig
MOZ_PLIST_DIRS?=	bin lib share/applications share/pixmaps
PLISTF?=		${WRKDIR}/plist_files

MOZ_MK_DIR=	freebsd_out
MOZ_MK_OPTS+=	MOZ_OBJDIR=./${MOZ_MK_DIR}

MOZ_OPTIONS+=	--enable-application=comm/suite
MOZ_OPTIONS+=	--enable-official-branding
MOZ_OPTIONS+=	--enable-release
MOZ_OPTIONS+=	--enable-strip
MOZ_OPTIONS+=	--enable-install-strip
MOZ_OPTIONS+=	--enable-optimize
MOZ_OPTIONS+=	--disable-rust-simd
MOZ_OPTIONS+=	--disable-debug
MOZ_OPTIONS+=	--disable-debug-symbols
MOZ_OPTIONS+=	--disable-rust-debug
MOZ_OPTIONS+=	--disable-tests
MOZ_OPTIONS+=	--disable-updater
MOZ_OPTIONS+=	--disable-jack
MOZ_OPTIONS+=	--disable-gconf
MOZ_OPTIONS+=	--disable-webrtc
MOZ_OPTIONS+=	--prefix=${PREFIX}

CFLAGS+=	-O3
MOZ_EXPORT+=	MOZ_OPTIMIZE_FLAGS="${CFLAGS:M-O*}"

OPTIONS_DEFINE=	DBUS HUNSPELL
DBUS_DESC=	D-Bus support
HUNSPELL_DESC=	use systems hunspell

OPTIONS_GROUP=		AUDIO
OPTIONS_GROUP_AUDIO=	ALSA PULSEAUDIO
AUDIO_DESC?=		audio backends
ALSA_DESC=		ALSA
PULSEAUDIO_DESC=	PulseAudio sound server support

OPTIONS_DEFAULT=	DBUS HUNSPELL ALSA PULSEAUDIO

DESKTOP_ENTRIES=	"SeaMonkey" \
			"Internet Application Suite" \
			"${PREFIX}/share/pixmaps/${PORTNAME}.png" \
			"${PORTNAME}" \
			"Network;GTK;Email;WebBrowser;News;" \
			true

.include "${.CURDIR}/Makefile.ca"
.include <bsd.port.pre.mk>

.if ${PORT_OPTIONS:MDBUS}
MOZ_OPTIONS+=	--enable-dbus
LIB_DEPENDS+=	libdbus-glib-1.so:devel/dbus-glib
LIB_DEPENDS+=	libdbus-1.so:devel/dbus
.else
MOZ_OPTIONS+=	--disable-dbus
.endif

.if ${PORT_OPTIONS:MHUNSPELL}
MOZ_OPTIONS+=	--enable-system-hunspell
BUILD_DEPENDS+=	hunspell:textproc/hunspell
RUN_DEPENDS+=	hunspell:textproc/hunspell
.else
MOZ_OPTIONS+=	--disable-system-hunspell
.endif

.if ${PORT_OPTIONS:MALSA}
MOZ_OPTIONS+=	--enable-alsa
BUILD_DEPENDS+=	${LOCALBASE}/include/alsa/asoundlib.h:audio/alsa-lib
LIB_DEPENDS+=	libasound.so:audio/alsa-lib
RUN_DEPENDS+=	alsa-plugins>=0:audio/alsa-plugins
.else
MOZ_OPTIONS+=	--disable-alsa
.endif

.if ${PORT_OPTIONS:MPULSEAUDIO}
MOZ_OPTIONS+=	--enable-pulseaudio
LIB_DEPENDS+=	libpulse.so:audio/pulseaudio
RUN_DEPENDS+=	pulseaudio:audio/pulseaudio
.else
MOZ_OPTIONS+=	--disable-pulseaudio
.endif

do-build:
	@${RM} ${MOZCONFIG}
.for arg in ${MOZ_MK_OPTS}
	@${ECHO_CMD} mk_add_options ${arg:Q} >> ${MOZCONFIG}
.endfor
.for arg in ${MOZ_OPTIONS}
	@${ECHO_CMD} ac_add_options ${arg:Q} >> ${MOZCONFIG}
.endfor
.for var in ${MOZ_EXPORT}
	@${ECHO_CMD} export ${var:Q} >> ${MOZCONFIG}
.endfor
	${MKDIR} ${WRKSRC}/${MOZ_RESULT}
	${WRKSRC}/mach build

do-install:
	${CP} -rL ${WRKSRC}/${MOZ_MK_DIR}/dist/bin ${STAGEDIR}${PREFIX}/lib/${PORTNAME}
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/lib/${PORTNAME}/nsinstall

post-install:
	${LN} -sf ../lib/${PORTNAME}/${PORTNAME} \
		${STAGEDIR}${PREFIX}/bin/${PORTNAME}
	${LN} -sf ../../lib/${PORTNAME}/chrome/icons/default/default128.png \
		${STAGEDIR}${PREFIX}/share/pixmaps/${PORTNAME}.png
	${RM} ${PLISTF}
.for dir in ${MOZ_PLIST_DIRS}
	@cd ${STAGEDIR}${PREFIX}/${dir} && ${FIND} -H -s * ! -type d | \
		${SED} -e 's|^|${dir}/|' >> ${PLISTF}
.endfor
	${CAT} ${PLISTF} | ${SORT} >> ${TMPPLIST}

.include <bsd.port.post.mk>
