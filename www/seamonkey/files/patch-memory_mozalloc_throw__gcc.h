--- memory/mozalloc/throw_gcc.h.orig	2023-02-25 21:24:30 UTC
+++ memory/mozalloc/throw_gcc.h
@@ -80,65 +80,84 @@ __throw_bad_function_call(void)
     mozalloc_abort("fatal: STL threw bad_function_call");
 }
 
+#if !defined(_LIBCPP_VERSION)
 MOZ_THROW_NORETURN MOZ_THROW_EXPORT MOZ_THROW_INLINE void
 __throw_logic_error(const char* msg)
 {
     mozalloc_abort(msg);
 }
+#endif
 
+#if !defined(_LIBCPP_VERSION)
 MOZ_THROW_NORETURN MOZ_THROW_EXPORT MOZ_THROW_INLINE void
 __throw_domain_error(const char* msg)
 {
     mozalloc_abort(msg);
 }
+#endif
 
+#if !defined(_LIBCPP_VERSION)
 MOZ_THROW_NORETURN MOZ_THROW_EXPORT MOZ_THROW_INLINE void
 __throw_invalid_argument(const char* msg)
 {
     mozalloc_abort(msg);
 }
+#endif
 
+#if !defined(_LIBCPP_VERSION)
 MOZ_THROW_NORETURN MOZ_THROW_EXPORT MOZ_THROW_INLINE void
 __throw_length_error(const char* msg)
 {
     mozalloc_abort(msg);
 }
+#endif
 
+#if !defined(_LIBCPP_VERSION)
 MOZ_THROW_NORETURN MOZ_THROW_EXPORT MOZ_THROW_INLINE void
 __throw_out_of_range(const char* msg)
 {
     mozalloc_abort(msg);
 }
+#endif
 
+#if !defined(_LIBCPP_VERSION)
 MOZ_THROW_NORETURN MOZ_THROW_EXPORT MOZ_THROW_INLINE void
 __throw_runtime_error(const char* msg)
 {
     mozalloc_abort(msg);
 }
+#endif
 
+#if !defined(_LIBCPP_VERSION)
 MOZ_THROW_NORETURN MOZ_THROW_EXPORT MOZ_THROW_INLINE void
 __throw_range_error(const char* msg)
 {
     mozalloc_abort(msg);
 }
+#endif
 
+#if !defined(_LIBCPP_VERSION)
 MOZ_THROW_NORETURN MOZ_THROW_EXPORT MOZ_THROW_INLINE void
 __throw_overflow_error(const char* msg)
 {
     mozalloc_abort(msg);
 }
+#endif
 
+#if !defined(_LIBCPP_VERSION)
 MOZ_THROW_NORETURN MOZ_THROW_EXPORT MOZ_THROW_INLINE void
 __throw_underflow_error(const char* msg)
 {
     mozalloc_abort(msg);
 }
+#endif
 
 MOZ_THROW_NORETURN MOZ_THROW_EXPORT MOZ_THROW_INLINE void
 __throw_ios_failure(const char* msg)
 {
     mozalloc_abort(msg);
 }
+
 
 MOZ_THROW_NORETURN MOZ_THROW_EXPORT MOZ_THROW_INLINE void
 __throw_system_error(int err)
