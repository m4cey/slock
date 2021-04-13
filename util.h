/* macros */
#define LEN(a)			(sizeof(a) / sizeof(a)[0])

#undef explicit_bzero
void explicit_bzero(void *, size_t);
void die(const char *fmt, ...);
void *ecalloc(size_t nmemb, size_t size);
