#include<stdio.h>
int main()
{
    int n,r,sum=0;
    printf("\n Please enter any number\n");
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        sum=sum+r;
        n=n/10;
    }
    printf("\n Sum of the digits of given number=%d",sum);
    return 0;
    
}
