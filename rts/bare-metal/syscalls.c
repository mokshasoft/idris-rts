/* for caddr_t (typedef char * caddr_t;) */
#include <sys/types.h>

extern int __HeapBase;
caddr_t _sbrk ( int incr )
{
  static unsigned char *heap = NULL;
  unsigned char *prev_heap;

  if (heap == NULL) {
    heap = (unsigned char *)&__HeapBase;
  }
  prev_heap = heap;

  heap += incr;

  return (caddr_t) prev_heap;
}
