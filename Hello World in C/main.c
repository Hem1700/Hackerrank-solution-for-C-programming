#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char s[100];
    scanf("%[^\n]%*c", &s);
    printf("Hello world!\n");
    printf(&s);
    return 0;
}
