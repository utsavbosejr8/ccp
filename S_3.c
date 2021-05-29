#include <stdio.h>
int smallest(int a, int b, int c)
{

   if(a<b && a<c)
    return a;
   else if(b<a && b<c)
    return b;
   else
    return c;
}

int main()
{
    int num1, num2, num3, result;
    printf("Enter the 3 numbers\n");
    scanf("%d %d %d", &num1, &num2, &num3);
    result=smallest(num1, num2, num3);
    printf("The smallest among %d, %d, %d is %d", num1, num2, num3, result);
    return 0;
}
