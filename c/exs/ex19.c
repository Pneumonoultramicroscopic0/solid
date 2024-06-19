#include <stdio.h>

int main(){
    char ctg;
    float pht;
    printf ("what's the \"ctg\" ?\n");
    scanf ("%c", &ctg);
    printf ("pht = ");
    scanf ("%f", &pht);
    if (ctg == 'a'){
        printf ("pttc = %.2f", pht + pht * 0.07);
    }
    else if (ctg == 'b'){
        printf ("pttc = %.2f", pht + pht * 0.2);
    }
    else if (ctg == 'c'){
        printf ("pttc = %.2f", pht + pht * 0.25);
    }
    else {
        printf ("there is no ctg \"%c\"", ctg);
        return 1;
    }
    return 0;
}