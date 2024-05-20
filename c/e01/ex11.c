#include <stdio.h>

int main(){
    float r1, r2, r3, s, p;
    printf ("R1 = ");
    scanf ("%f", &r1);
    printf ("R2 = ");
    scanf ("%f",&r2);
    printf ("R3 = ");
    scanf ("%f", &r3);
    s = r1 + r2 + r3;
    p = (r1 * r2 * r2) / (r1 * r2 + r1 * r3 + r2 * r2);
    printf ("Rs = %.2f\nRp = %.2f",s,p);
    
    return 0;
}