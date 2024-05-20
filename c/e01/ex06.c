#include <stdio.h>
#include <math.h>

int main(){
    float r, v;
    const float pi = 3.14;
    printf ("r = ");
    scanf ("%f", &r);
    v = (4 * pi * pow(r, 3)) / 3;
    printf ("v = %.2f", v);
    
    return 0;
}