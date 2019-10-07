#include <stdio.h>
#include <stdlib.h>
#include "./index.h"
#include "../utils/tool.h"

int main()
{
  int arr[9] = {3, 3, 2, 1, 2, 4, 6, 1, 4};
  int n = sizeof(arr) / sizeof(arr[0]);

  quickSort(&arr, n);

  printf("\n排序后:\n");
  printIntArray(arr, n);

  system("pause");
  return 0;
}