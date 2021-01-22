#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    char sen[100],s[50];
    scanf("%c\n" , &ch);
    scanf("%s" ,s);
    scanf("\n");
    scanf("%[^\n]%*c" , sen);
    printf("%c\n" , ch);
    printf("%s\n" , s);
    printf("%s\n" , sen);
    return 0;
}
