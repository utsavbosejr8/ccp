#include<stdio.h>
int main()
{
    char ch;
    printf("Enter the character:");
    scanf("%c",&ch);
    if((ch>='A'&&ch<='Z')||(ch='a'&&ch<='z'))
    {
        switch(ch)
        {
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("%c is a Vowel\n",ch);
            break;
            default:
            printf("%c is a Consonant\n",ch);
        }
    }
        else
        {
            printf("%c is not an alphabet\n",ch);
        }
        return 0;


}


