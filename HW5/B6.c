#include <stdio.h>

int main (void)
{
    int  a, b;
    scanf("%d", &a); 
    b = 0;
  if(a == 0)
{
 printf("NO\n");
 
}
    while(a > 0){
	if((a/10)%10 == a%10) {
		b = 1;
		}
a = a/10;
if((b == 1) && (a!=0))  
{
    printf("YES\n");
    break;
 }
 if ((b != 1) && (a == 0))
 {
	 printf("NO\n");
	 break;
 }
}

    return 0;
}

