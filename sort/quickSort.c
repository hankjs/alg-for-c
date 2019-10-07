void sort(int *arr, int left, int right)
{
  if (left > right)
  {
    return;
  }
  int t;
  int i = left;
  int j = right;
  int temp = arr[left];

  while (i != j)
  {
    while (arr[j] >= temp && i < j)
    {
      j--;
    }

    while (arr[i] <= temp && i < j)
    {
      i++;
    }

    if (i < j)
    {
      t = arr[i];
      arr[i] = arr[j];
      arr[j] = t;
    }
  }

  arr[left] = arr[i];
  arr[i] = temp;

  sort(arr, left, i - 1);
  sort(arr, i + 1, right);
}

void quickSort(int *arr, int n)
{
  sort(arr, 0, n - 1);
}