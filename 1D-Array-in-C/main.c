#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n , *arr;
    arr = (int*) malloc(n * sizeof(int));
    scanf("%d" , &n);
    for(int i=0;i<n;i++){
        scanf("%d" , arr+i);
    }
    int sum = 0;
    for(int i =0 ; i<n; i++){
        sum = sum+*(arr+i);
    }
    printf("%d" , sum);
    return 0;
}
