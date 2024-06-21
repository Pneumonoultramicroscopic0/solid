#include <stdio.h>

int main(){
    int n, i;
    scanf ("%d", &n);
    for (i = 0; i <= 10; i ++){
        printf ("%d * %d = %d\n", i, n, i * n);
    }
    int s, j, m;
    scanf ("%d", &m);
    s =0;
    for (j = 1; j <= m; j ++){
        s = s + j;
    }
    printf ("%d\n", s);
    
    return 0;
}