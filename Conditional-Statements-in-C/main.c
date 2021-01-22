#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readline();
int main()
{
    //Code
    int n;
    scanf("%d" , &n);
    if(n==1){
        printf("One");
    }
    else if(n==2){
        printf("Two");
    }
    else if(n==3){
        printf("Three");
    }
    else if(n==4){
        printf("Four");
    }
    else if(n==5){
        printf("Five");
    }
    else if(n==6){
        printf("Six");
    }
    else if(n==7){
        printf("Seven");
    }
    else if(n==8){
        printf("Eight");
    }
    else if(n==9){
        printf("Nine");
    }
    else{
        printf("Greater than 9.");
    }
    return 0;
}

char* readline() {
    size_t alloc_length = 1024;
    size_t data_length = 0;
    char* data = malloc(alloc_length);

    while (true) {
        char* cursor = data + data_length;
        char* line = fgets(cursor, alloc_length - data_length, stdin);

        if (!line) { break; }

        data_length += strlen(cursor);

        if (data_length < alloc_length - 1 || data[data_length - 1] == '\n') { break; }

        size_t new_length = alloc_length << 1;
        data = realloc(data, new_length);

        if (!data) { break; }

        alloc_length = new_length;
    }

    if (data[data_length - 1] == '\n') {
        data[data_length - 1] = '\0';
    }

    data = realloc(data, data_length);

    return data;
}
