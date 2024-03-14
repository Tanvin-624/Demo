#include<stdio.h>
    int main(){
    int num, reversed_num = 0;
    scanf("%d", &num);
    while (num != 0) {
      int digit = num % 10;
      reversed_num = reversed_num * 10 + digit;
      num /= 10;
    }
    printf("%d\n", reversed_num);
    return 0;
    }
