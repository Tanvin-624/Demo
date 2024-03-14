#include<stdio.h>
  int main() {
    int n, i;
    unsigned long long fact = 1;
    scanf("%d", &n);
    if (n < 0){
      printf("Error!");
    }
    else {
        for (i = 1; i <= n; ++i) {
          fact *= i;
        }
        printf("%d! = %d ", n,n);
        for (i = n-1; i >= 0; i--) {
          if(i==0){
            break;
          }
          printf("x %d ", i);
        }
      printf("= %d",fact);
    }
    return 0;
  }

