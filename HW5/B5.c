#include <stdio.h>

int main (void)
{
    int  a, c;
    scanf("%d", &a); 
    c = 0;
    while(a > 0){
    c += a%10;
	a /= 10;
}
    printf("%d\n", c);
 
    return 0;
}

