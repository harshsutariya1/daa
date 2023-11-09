#include <stdio.h>
int count(int S[], int m, int n)
{
     if (n == 0)
          return 1;
     if (n < 0)
          return 0;
     if (m <= 0 && n >= 1)
          return 0;
     return count(S, m - 1, n) + count(S, m, n - S[m - 1]);
}
int main()
{
     int i, j;
     int arr[] = {2, 5, 8};
     int m = sizeof(arr) / sizeof(arr[0]);
     printf("count: %d", count(arr, m, 10));
     return 0;
}