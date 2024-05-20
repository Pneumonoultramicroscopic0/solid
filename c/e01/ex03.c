#include <stdio.h>
#include <math.h>

int main()
{
    float x, y, n;
    /*x l2asas // y l2oss // n x^(y)*/
    printf("an7sblk x^(y)\nx = ");
    scanf("%f", &x);
    printf("y = ");
    scanf("%f", &y);
    n = pow(x, y);
    printf("x^(y) = %.2f", n);

    return 0;
}