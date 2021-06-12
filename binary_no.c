#include<stdio.h>
void main()
{
    int num,b=0,rem,i=0;
    printf("Enter the number:");
    scanf("%d",&num);
    while(num!=0)
    {
        rem=num%2;
        b=rem*pow(10,i);
        num=num/2;
        i++;
    }
    printf("The binary equivalent of the given number is %d,b");
}
