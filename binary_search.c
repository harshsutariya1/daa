// Implementation and Time analysis of linear and binary search algorithm.
#include <stdio.h>
#include <conio.h>
#include <string.h>
int binarysearch(int ar[10], int j, int left, int right)
{
     if (left <= right)
     {
          int mid;
          mid = (left + right) / 2;
          if (ar[mid] == j)
          {
               return mid;
          }
          if (ar[mid] > j)
          {
               right = mid - 1;
               binarysearch(ar, j, left, right);
          }
          if (ar[mid] < j)
          {
               left = mid + 1;
               binarysearch(ar, j, left, right);
          }
     }
     else
     {
          return -1;
     }
}
void main()
{
     int ar[10], i, j, search;
     printf("Enter Element which are sorted\n\n");
     printf("Enter the Element in array :\n");
     for (i = 0; i < 10; i++)
     {
          printf("element %d: ", i + 1);
          scanf("%d", &ar[i]);
     }
     printf("Entered Elements in array: ");
     for (i = 0; i < 10; i++)
     {
          printf("%d ", ar[i]);
     }
     printf("\nEnter the Element you want to find in array: ");
     scanf("%d", &j);
     search = binarysearch(ar, j, 0, 9);
     if (search == -1)
     {
          printf("Invalid call");
     }
     else
     {
          printf("element found on possition: %d", search + 1);
     }
}