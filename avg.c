#include<stdio.h>
int main()
{
    int a,b,c;
    int average;
    printf("Enter the 1st number\n");
    printf("Enter the 2nd number\n");
    printf("Enter the 3rd number\n");
    scanf("%d%d%d",&a,&b,&c);
    average=a+b+c/3;
    printf("%d average",average);
    return 0;
}
