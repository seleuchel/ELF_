/* Generated by compiling with any GCC version and with a binutils
** distribution that includes support for compressed sections. GNU binutils
** 2.28 is fine.
**
** gcc -c -m32 -O0 -g compressed.c -o compressed_32.o
** gcc -c -m64 -O0 -g compressed.c -o compressed_64.o
**
** compressed_unknown_type.o is a copy of compressed_64.o that is hand
** hex-edited to replace the ch_field with 0x7ffffffe.
**
** compressed_bad_size.o is a copy of compressed_64.o that is hand
** hex-edited to replace the ch_size with 0x328 (instead of 0x327).
*/

#include <stdio.h>

int foo(int i) {
  printf ("i = %i\n", i);
  return 0;
}
