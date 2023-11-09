// Implementation and Time analysis of linear and binary search algorithm.
#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
     int arr[10], i, j;
     printf("Enter 10 numbers in array :\n");
     for (j = 0; j < 10; j++)
     {
          printf("enter number %d: ", j + 1);
          scanf("%d", &arr[j]);
     }
     printf("Enter numbers you want to search in array: ");
     scanf("%d", &i);
     for (j = 0; j < 10; j++)
     {
          if (arr[j] == i)
          {
               printf("Number is : %d, At : %d (postion)\n", arr[j], j + 1);
          }
     }
     return 0;
}