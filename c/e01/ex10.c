#include <stdio.h>
#include <math.h>

int main(){
    float m,n,o,p,i,j,d;
    printf ("i7datiyat A :\n");
    scanf ("%f%f",&m,&n);
    printf ("i7datiyat B :\n");
    scanf ("%f%f",&o,&p);
    i = pow(o - m, 2);
    j = pow(p - n, 2);
    d = sqrt(i + j);
    printf ("AB = %.2f",d);
    
    return 0;
}