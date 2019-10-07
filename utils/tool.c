#include <stdio.h>

void printIntArray(int *arr, int len)
{
  for (int i = 0; i < len; i++)
  {
    printf("%d => %d\n", i, *(arr + i));
  }
}
