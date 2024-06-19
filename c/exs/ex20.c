#include <stdio.h>

int main(){
    char e;
    float a, b;
    
    printf ("i can do + - * /\n");
    scanf ("%f%c%f", &a, &e, &b);
    
    switch (e){
        case '+' : printf ("=%.2f", a + b);
                        break;
        case '-' : printf ("=%.2f", a - b);
                        break;
        case '*' : printf ("=%.2f", a * b);
                        break;
        case '/' : if (b == 0){
                            printf ("tf r u doing?");
                        }
                        else {
                            printf ("=%.2f", a / b);
                        }
                        break;
        default : printf ("can\'t do %c", e);
                        break;
    }
    return 0;
}