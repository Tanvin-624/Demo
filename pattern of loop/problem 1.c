#include<stdio.h>
int main()
{
    int num;
    printf("Enter your number:");
    scanf("%d",&num);

    for(int i=1;i<=num;i++)
    {   if(i)
        {
           printf("%d",i);
        }

        else if(i<num){
            printf(",");}
    }

    return 0;
}
