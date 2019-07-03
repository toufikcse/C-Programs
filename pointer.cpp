#include<stdio.h>
#include<stdlib.h>

int main(){
    int age = 30;
    int * pAge = &age;

    printf("%p\n", pAge);

    return 0;
}
