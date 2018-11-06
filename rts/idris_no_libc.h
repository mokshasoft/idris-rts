#ifndef _IDRIS_NO_LIBC_H
#define _IDRIS_NO_LIBC_H

#undef assert
#define assert(...)
#define printf(...)
#define fprintf(...)

#define puts(...)
#define fflush(...)

// This has to be handled by each platform
#define abort(...)
#define exit(...)

#endif
