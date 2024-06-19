#include <stdio.h>

int main(){
    int n;
    
    printf("N zawji wla fardi?\nN = ");
    scanf("%d", &n);
    
    if (n % 2 != 0)
        printf("N fardi");
    else
        printf("N zawji");
    
    return 0;
}