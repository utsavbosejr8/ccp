#include<stdio.h>
#include<math.h>
#include<conio.h>
int main()
{
  int x1,y1,x2,y2;
  float D;
  printf(" Enter the coordinates for 1st point");
  scanf("%d %d",&x1,&y1);
  printf("Enter coordinates for 2nd point");
  scanf("%d %d",&x2,&y2);
  D=sqrt(pow((y2-y1),2)+pow((x2-x1),2));
  printf("Distance is:%.3f",D);
  return 0;
}
