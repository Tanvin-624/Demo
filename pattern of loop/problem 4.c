#include<stdio.h>
int main()
{
    int num;
    float avg,num2;
    scanf("%d",&num);

    for(int counter=1; counter<=num; counter=counter+1)
    {
        scanf("%f",&num2);
        avg=avg+num2;

    }
    printf("average of %d inputs:%f",num,(avg/num));
    return 0;
}

