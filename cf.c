#include<stdio.h>
#include<conio.h>
int main()
{

    float c,f;
    //clrscr();
    printf("\n Enter the value in fahrenheit");
    scanf("%f",&f);
    c=(f-32)*5/9;
    printf("%f",c);
    return 0;
}
