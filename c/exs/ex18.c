#include <stdio.h>

int main(){
    char g; // gender
    int a; // age
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
    if (g == 'm'){
        if (a < 20){
            printf ("no taxes for you");
        }
        else{
            printf ("pay your taxes");
        }
        return 0;
    }
    else{
        if (a >= 18 && a < 35){
            printf ("pay your taxes");
        }
        else {
            printf ("no taxes for you");
        }
        return 0;
    }
}