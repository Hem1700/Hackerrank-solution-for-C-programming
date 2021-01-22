#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    float c , d;
    scanf("%d %d" , &a, &b);
    scanf("%f %f" , &c, &d);
    printf("%d\t",a+b);
    printf("%d\n",a-b);
    printf("%0.1f\t",c+d);
    printf("%0.1f",c-d);
    return 0;
}
