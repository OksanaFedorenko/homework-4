/*#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include "ft_memset.c"*/
#include "mylib.h"

void *ft_memalloc(size_t size)
{
  void *buffer = malloc(size);

  if (buffer != NULL) {
      ft_memset(buffer, 0, size);
      return buffer;
  } else {
      printf("Malloc didn't allocate memory buffer...\n");
      return NULL;
  }
}