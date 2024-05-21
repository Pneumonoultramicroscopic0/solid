#include <stdio.h>

int main(){
    float x,y,d,j,q,t;
    /*d * // j + // q / // t -*/
    printf ("x = ");
    scanf ("%f",&x);
    printf ("y = ");
    scanf ("%f",&y);
    d = x*y;
    j = x+y;
    q = x/y;
    t = x-y;
    printf ("xy = %.2f\nx+y = %.2f\nx/y = %.2f\nx-y = %.2f",d,j,q,t);
    
    return 0;
}