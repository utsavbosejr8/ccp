#include<stdio.h>
int main()
{
    int m=2,n;
    printf("Enter the value of last limit");
    scanf("%d",&n);
    while(m<=n)
    {
        printf("%d\t",m);
        m=m+2;
    }
    return 0;
}
