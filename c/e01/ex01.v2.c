#include <stdio.h>

int main(){
    int year, age;
    printf("what's the year you've born in?\n");
    scanf("%d", &year);
    age = 2024 - year;
    printf("your age is %d", age);
    
    return 0;
}