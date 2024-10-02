#include <stdio.h>

int main (void)
{
    int  a, b, n = 0, m = 0;
    scanf("%d", &a); 
    b = 0;
 
    while(a > 0){
	
b = a%2;
        //printf("b=%d\n", b);
a = a/10;
        //printf("a=%d\n", a);

if(b == 1)
{ 
n = n + 1;
}
if(b == 0)
 {
m = m + 1;
 }		

 
}
printf("%d  %d", m, n);
    return 0;
}
