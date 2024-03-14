#include<stdio.h>
int main()
{
      int guess,num,time;
      scanf("%d",&num);
      scanf("%d",&time);
      for(int i = 0; i < time; i++) {
        scanf("%d", &guess);
        if(guess == num) {
            printf("Right, Player-2 wins!\n");
            break;
        } else {
            printf("Wrong, %d Choice(s) Left!\n", time-i-1);
        }
      }
      if(guess != num) {
         printf("Player-1 wins!\n");
      }
    return 0;
    }




