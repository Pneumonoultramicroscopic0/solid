#include <stdio.h>
#include <math.h>

int main(){
    float a, b, c, d, m, n;
    printf ("ax^(2) + bx + c = 0\na = ");
    scanf ("%f", &a);
    printf ("b = ");
    scanf ("%f", &b);
    printf ("c = ");
    scanf ("%f", &c);
    d = pow(b, 2) - 4 * a * c;
    if (d < 0)
        printf ("ma3ndhax 7al f R\nd = %.2f < 0", d);
   else if (d == 0){
       m = -b / (2 * a);
       printf ("7al wa7d howa x = %.2f", m); 
   }
    else {
        m = (-b + sqrt (d)) / (2 * a);
        n = (-b - sqrt (d)) / (2 * a);
        printf ("3ndha 2 7olol\n x1 = %.2f\nx2 = %.2f", m, n);
    }
    
    return 0;
}