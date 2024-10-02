#include <stdio.h>

int main (void)
{
    int  a, m, n;
    scanf("%d", &a);       
 
    while (a > 0)                          
    {
        m = a%10;
        if(m > n) {
			n = m;
		}
        a /= 10;
    }
    printf("%d", n);                
    return 0;
}
