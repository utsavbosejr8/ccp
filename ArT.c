#include<stdio.h>
int main()
{
    int a,b,c;
    float S,A;
    printf("length of 1st side");
    scanf("%d",&a);
    printf("Length of 2nd side");
    scanf("%d",&b);
    printf("Length of 3rd side");
    scanf("%d",&c);
    S=(a+b+c)/2;
    A=sqrt(S*(S-a)*(S-a)*(S-c));
    printf("The area of triangle is :%0.2f",A);
    return 0;
}
