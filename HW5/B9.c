#include <stdio.h>

int main (void)
{
    int  a, b;
    scanf("%d", &a); 
    b = 0;
 
    while(a > 0){
	
b = a%2;
//printf("%d b= \n", b);
a = a/10;
//printf("%d a= \n", a);

if(b == 1)
{ 
printf("NO\n");
    break;
}
if((b == 0) && (a == 0)) 
 {
	 printf("YES\n");
	 break;
 }		

 
}

    return 0;
}

