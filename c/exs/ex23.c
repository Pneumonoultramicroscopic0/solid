#include <stdio.h>

int main(){
    int y; //year
    
    printf ("give me the year and i\'ll tell you if it a leap year or not\n");
    scanf ("%d", &y);
    
    if ((y % 2 == 0 && y %100 != 0) || (y % 400 == 0))
       printf ("%d is a leap year", y);
    else
        printf ("%d isn\'t a leap year", y);
        
    return 0;
}