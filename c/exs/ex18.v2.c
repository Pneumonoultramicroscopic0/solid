#include <stdio.h>
#include <stdbool.h>

int main(){
    char g; // gender
    int a; // age
    bool x;
    printf ("what's your gender?\nonly m or f\n");
    scanf ("%c", &g);
    if (g != 'm'){
        if (g != 'f'){
            printf ("%c not a gender", g);
            return 0;
        }
    }
    printf ("how old are you?\n");
    scanf ("%d", &a);
    x = ((g == 'm' && a >= 20) || (g == 'f' && a >= 18 && a <= 35));
    if (x) {
        printf ("pay your taxes");
    }
    else {
        printf ("no taxes for you");
    }
        return 0;
}