--- deps/v8/src/codegen/arm/cpu-arm.cc.orig	2021-10-12 06:13:34 UTC
+++ deps/v8/src/codegen/arm/cpu-arm.cc
@@ -2,12 +2,15 @@
 // Use of this source code is governed by a BSD-style license that can be
 // found in the LICENSE file.
 
+#include "include/v8config.h"
+
 // CPU specific code for arm independent of OS goes here.
 #ifdef __arm__
 #ifdef __QNXNTO__
 #include <sys/mman.h>  // for cache flushing.
 #undef MAP_TYPE        // NOLINT
 #elif V8_OS_FREEBSD
+#include <sys/cdefs.h>
 #include <machine/sysarch.h>  // for cache flushing
 #include <sys/types.h>
 #else
