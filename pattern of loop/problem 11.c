#include<stdio.h>
  int main() {
    int n;
    int sum = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        int term = (i * i);
        sum += (i+1) * term;
    }
    printf("Result: %d\n", sum);
    return 0;
  }
