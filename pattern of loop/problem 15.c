  #include<stdio.h>
  int main() {
    int x, y;
    long long result = 1;
    scanf("%d%d", &x, &y);
    for(int i = 0; i < y; i++) {
      result *= x;
    }
    printf("%lld\n", result);
    return 0;
  }
