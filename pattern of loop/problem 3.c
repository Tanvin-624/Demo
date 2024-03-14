#include<stdio.h>
int main()
{
    int num;
    printf("Enter your number:");
    scanf("%d",&num);

    for(int counter=1; counter<=num; counter=counter+1)
    {
        if(counter%2!=0)
        {
            printf("1");
        }
        else printf("0");
        if(counter!=num)
            printf(",");
    }
       return 0;
}
