#include <stdio.h>

int main (void)
{
    int  a, m = 1;
    scanf("%d", &a);       
 
    while (a > 0)                          
    {
        m *= a%10;
        a /= 10;
    }
    printf("%d", m);                
    return 0;
}
