#include <stdio.h>

int main(){
    int a, b, c;
    printf ("A = ");
    scanf ("%d", &a);
    printf ("B = ");
    scanf ("%d", &b);
    if (a*b>0){
        a = a + b;
        b = a - b;
        a = a - b;
    }
    else {
        c = a;
        a = a + b;
        b = b * c;
    }
    printf ("A = %d\nB = %d", a, b);
    
    return 0;
}