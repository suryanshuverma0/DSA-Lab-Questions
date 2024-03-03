#include <stdio.h>

int binarySearch(int arr[], int n, int key)
{
         int left = 0, right = n - 1;
         while (left <= right)
         {
                  int mid = left + (right - left) / 2;
                  if (arr[mid] == key)
                  {
                           return mid;
                  }
                  if (arr[mid] < key)
                  {
                           left = mid + 1;
                  }
                  else
                  {
                           right = mid - 1;
                  }
         }
         return -1;
}

int main()
{
         int arr[] = {11, 12, 22, 25, 64};
         int n = sizeof(arr) / sizeof(arr[0]);
         int key = 22;

         int result = binarySearch(arr, n, key);

         if (result != -1)
         {
                  printf("%d found at index %d\n", key, result);
         }
         else
         {
                  printf("%d not found in the array\n", key);
         }

         return 0;
}
