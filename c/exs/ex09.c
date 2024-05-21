#include <stdio.h>

int main(){
    int t,h,m,s;
    printf ("T = ");
    scanf ("%d", &t);
    h = t/3600;
    t = t%3600;
    m = t/60;
    s = t%60;
    printf ("%dh %dmin %ds", h, m, s);
    
    return 0;
}