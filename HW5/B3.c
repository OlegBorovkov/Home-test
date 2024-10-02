#include <stdio.h>

int main (void)
{
    int  a, b, c;
    scanf("%d %d", &a, &b); 
 for(int i = a; i <= b; i++)  {
	c = c + i*i;	
 }       
printf("%d", c); 
      return 0;
}
