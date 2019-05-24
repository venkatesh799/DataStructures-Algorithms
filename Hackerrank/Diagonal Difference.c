// calculating the absolute difference between the sums of its diagonals in a square matrix.

#include <stdio.h>
#include <stdlib.h>
int main() {
  int n, a[1000][1000], i = 1, j = 1, sum1 = 0, sum2 = 0;
  scanf("%d", &n);
  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {
      scanf("%d", &a[i][j]);
    }
  }
  for (i = 0; i < n; i++)
   {
    for (j = 0; j < n; j++)
     {
      if (i == j)
       {
        sum1 = sum1 + a[i][j]; // right to left diagonalsum
      }
      if ((i + j) == n - 1) 
      {
        sum2 = sum2 + a[i][j]; // left-to-right diagonal sum
      }
    }
  }
  printf("%d", abs(sum1 - sum2)); // absolute difference between diagonals
  return 0;
}
