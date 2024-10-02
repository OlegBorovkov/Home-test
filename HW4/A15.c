#include <stdio.h>

int main (void)
{
    int  X1, Y1, X2, Y2;
    float K, B;
    scanf("%d %d %d %d", &X1, &Y1, &X2, &Y2);       
 K = 1.*(Y1 - Y2) /(X1 - X2);
 B = 1.*(Y2-K*X2); 
   
    printf("%.2f %.2f", K, B);                
    return 0;
}
