#include <stdio.h>

int main(){
    char ctg;
    float pht, pttc;
    printf ("what's the \"ctg\" ?\n");
    scanf ("%c", &ctg);
    printf ("pht = ");
    scanf ("%f", &pht);
    switch (ctg){
        case 'a' : pttc = pht + pht * 0.07;
                        printf ("pttc = %.2f", pttc);
                        break;
        case 'b' : pttc = pht + pht * 0.2;
                        printf ("pttc = %.2f", pttc);
                        break;
        case 'c' : pttc = pht + pht * 0.25;
                        printf ("pttc = %.2f", pttc);
                        break;
        default : printf ("%c is not a ctg", ctg);
                        break;
    }
    return 0;
}