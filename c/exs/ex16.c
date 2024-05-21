#include <stdio.h>

int main(){
    float n1, n2, n3, m;
    printf ("d5l 3 dyal n9at :\n");
    scanf ("%f%f%f", &n1, &n2, &n3);
    m = (n1 + n2 + n3) / 3;
    printf ("M = %.2f\n", m);
    if (m >= 0 && m < 10)
        printf ("insuffissant");
    else if (m >= 10 && m < 12)
        printf ("passable");
    else if (m >= 12 && m < 14)
        printf ("assez bien");
    else if (m >= 14 && m < 16)
        printf ("bien");
    else
        printf ("tres bien");
    
    return 0;
}