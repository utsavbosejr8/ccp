#include<stdio.h>
#include<conio.h>
int time(int,int);
void main()
{
    int min,res,hr;
    printf("\n Enter the value in hours=");
    scanf("%d",&hr);
    printf("\n Enter the value in minutes=");
    scanf("%d",&min);
    res=time(hr,min);
    printf("\n minute is=%d",res);
    getch();
}
int time(int H,int M)
{
    float R;
    R=(H*60)+M;
    return R;
}
