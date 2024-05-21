#include <stdio.h>

int main(){
    int age;
    printf ("age = ");
    scanf ("%d", &age);
    if (age >= 6 && age <= 7)
        printf ("poussin");
    else if (age >= 8 && age <= 9)
        printf ("pupille");
    else if (age >= 10 && age <= 11)
        printf ("minime");
    else
        printf ("cadet");
    
    return 0;
}