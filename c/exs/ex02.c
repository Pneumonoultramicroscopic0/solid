#include <stdio.h>

int main()
{
    float t, e, s, m;
    /* t (tol) e (3ord) s (misa7a) m (mo7it)*/
    printf("x7al tol? ");
    scanf("%f", &t);
    printf("x7al l'3ord? ");
    scanf("%f", &e);
    m = 2 * (t + e);
    s = t * e;
    printf("lmo7it : %.2f \nlmisa7a : %.2f", m, s);

    return 0;
}