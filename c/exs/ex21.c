#include <stdio.h>

int main(){
    int n;
    
    printf ("\t8\n4\t\t6\n\t2\nN = ");
    scanf ("%d", &n);
    
    switch (n){
        case 6 : printf ("left");
                    break;
        case 4 : printf ("right");
                    break;
        case 8 : printf ("up");
                    break;
        case 2 : printf ("down");
                    break;
        default : printf ("nothing");
                    break;
    }
    return 0;
}