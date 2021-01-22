#include <stdio.h>
#include <stdlib.h>

int max_of_four(int a , int b , int c, int d){
     int greatest = 0;
    if(a>b && a>c && a>b){
        greatest = a;
    }
    else if(b>a && b>c && b>d){
       greatest = b;
    }
    else if(c>a && c>b && c>d){
        greatest = c;
    }
    else if(d>a && d>b && d>c){
       greatest = d;
    }
    return greatest;
 }

int main()
{
    int a,b,c,d;
    scanf("%d %d %d %d ", &a, &b, &c, &d);
    int answer = max_of_four(a, b, c, d);
    printf("%d" ,answer);
    return 0;
}


