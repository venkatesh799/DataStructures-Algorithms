#include <stdio.h>
#include <stdlib.h>
int main() 
    {
    int a[1000],n,i,k; 
    scanf("%d", &n);
    scanf("%d", &k);
    for (i = 0; i < n; i++) {
      scanf("%d", &a[i]);
    }

    rotate(a, n, k);
    for (i = 0; i < n; i++) {
      printf("%d ", a[i]);
    }
   return 0;

}
int rotate(int a[], int n, int k) {
  int i;
  for (i = 0; i < k; i++) {
    leftrotate(a, n);
  }
  return 0;
}
int leftrotate(int a[], int n) {
 long int temp, i;
  temp = a[0];
  for (i = 0; i < n - 1; i++) {
    a[i] = a[i + 1];
  }
  a[i] = temp;
  return 0;
}
