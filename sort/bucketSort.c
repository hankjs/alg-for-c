#include <stdio.h>

void bucketSort(int *arr, int n)
{
  int t[256] = {0};
  int tmp = 0;

  for (int i = 0; i < n; i++)
  {
    t[arr[i]]++;
  }
  for (int i = 0; i < n; i++)
  {
    if (t[i] != 0)
    {
      for (int j = 0; j < t[i]; j++)
      {
        arr[tmp] = i;
        tmp++;
      }
    }
    
  }
  
}