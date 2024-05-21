#include <stdio.h>

int main(){
    float a, b, c, d, e, s, m;
    printf ("d5l 5 dn9at :\n");
    scanf ("%f%f%f%f%f", &a, &b, &c, &d, &e);
    //matnsax ladrisss ya wjh zb "&"
    s = a + b + c + d + e;
    m = s / 5;
    printf ("lmjmo3 howa : %.2f\nn9ta hiya : %.2f", s, m);
    
    return 0;
}