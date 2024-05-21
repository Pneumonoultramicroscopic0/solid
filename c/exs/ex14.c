#include <stdio.h>

int main(){
    int n;
    float f;
    printf ("x7al dyal lwra9?\nN : ");
    scanf ("%d", &n);
    if (n <= 10)
        f = n * 0.3;
    else if (n > 30)
        f = 10 * 0.3 + 20 * 0.25 + (n - 30) * 0.2;
    else
        f = 10 * 0.3 + (n - 10) * 0.25;
    printf ("F = %.2f", f);
    
    return 0;
}