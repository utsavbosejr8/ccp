#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,r1,r2,i,D;
    printf("Enter the the value of a,b,c of Quadratic equation:\n ");
    scanf("%f%f%f",&a,&b,&c);
    D=(b*b)-(4*a*c);
    if(D>0)
    {
        r1=(-b+sqrt(D)/(2*a));
        r2=(-b-sqrt(D)/(2*a));
        printf("\n Two distinct real roots:r1=%f and r2=%f",r1,r2);
    }
    else if(D==0)
    {
        r1=r2=-b/(2*a);
        printf("\n Two equal and real roots:r1=%f and r1=%f",r1,r2);
    }
    else if(D<0)
    {
        r1=r2=-b/(2*a);
        i=sqrt(-D)/(2*a);
        printf("\n Two distinct complex roots:r1=%f+%f and r2=%f-%f",r1,i,r2,i);
    }
    return 0;
}
