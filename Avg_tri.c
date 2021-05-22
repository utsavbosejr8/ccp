#include<stdio.h>
float area(float b,float h)
{
    return (b*h)/2;
}
int main()
{
    float b,h,a;
    printf("enter the base of triangle:");
    scanf("%f",&b);

    printf("enter the height of the triangle: ");
    scanf("%f",&h);
    a=area(b,h);
    printf("AOT: %f\n",a);
    return 0;
}
