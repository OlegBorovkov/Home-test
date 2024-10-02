#include <stdio.h>

int main (void)
{
    int  a, b, c, d, e, f;
    scanf("%d", &a); 
    b = 0;
    c = 0;
    d = 0;
    e = 0;
  if(a == 0)
{
 printf("NO\n");
 
}
    while(a > 0){
	if(((a/10)%10 < a%10) && (a != 0))
	 {
		b = 1;
		printf("%d b\n", b);
		}
		if(((a/100)%10 < (a/10)%10) && (a != 0))
		{
			c = 1;	
	}
	if(a == 0)
	{
		c = 1;
	}
		if(((a/1000)%10 <  (a/100)%10) && (a != 0))
		{
		d = 1;
	   }
	   else 
	   {
		   d = 0;
	   }
	if(a == 0)
	{
		d = 1;
	}
	if(((a/10000)%10 < (a/1000)%10) && (a != 0))
		{
		e = 1;	
		}
		else
		{
			e = 0;
		}
	if(a == 0)
	{
		e = 1;
	}
		
c = a%10;
printf("%d c\n", c);		
a = a/10;
printf("%d\n", a);
f = b*c*d*e;
if((f == 1) && (a == 0)) 
{
    printf("YES\n");
    break;
 }
 if ((f != 1) && (a == 0))
 {
	 printf("NO\n");
	 break;
 }
}

    return 0;
}

