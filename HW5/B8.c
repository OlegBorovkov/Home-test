#include <stdio.h>

int main (void)
{
    int  a, b, count;
    scanf("%d", &a); 
    b = 0;
  if(a == 0)
{
 printf("NO\n");
 
}
    while(a > 0){
	
b = a%10;
if(b == 9)
{ 
	count= count+1;
}
//printf("%d b= \n", b);		
a = a/10;
//printf("%d a= \n", a);
if((count == 1) && (a == 0))  
{
    printf("YES\n");
    break;
 }
 if ((count != 1) && (a == 0))
 {
	 printf("NO\n");
	 break;
 }
}

    return 0;
}

