#include <stdio.h>

int main (void)
{
    int  a, b, c, d, e, f, g, i;
    scanf("%d", &a); 
    b = 0;
    c = 0;
    d = 0;
    e = 0;
    i = 1;
  if(a == 0)
{
 printf("YES\n");
 
}
    while(a >0){
	if((a/10)%10 < a%10) 
	   {
		b = 1;
	   }
		//printf("%d b\n", b);
	if(((a/100)%10 < (a/10)%10) && (a != 0))
		{
		c = 1;	
		}
		if((g == 0) || (i != 2))
		{
			c=1;
	    }
	    // printf("%d c\n", c);
	if(((a/1000)%10 <  (a/100)%10) && (a != 0))
		{
		d = 1;
		 }
		 if((g == 0) || (i != 3))
	     {
		 d = 1;
	     }
	     // printf("%d d\n", d);
	if(((a/10000)%10 < (a/1000)%10) && (a != 0))
		{
		e = 1;	
		}
		if((g == 0) || (i != 4))
		{
			e = 1;
		}
	    //printf("%d e\n", e);
		
g = a%10;
        //printf("%d g\n", g);		
a = a/10;
        //printf("%d a\n", a);
i = i +1;
        //printf("%d i\n", i);
f = b*c*d*e;
        //printf("%d f\n", f);

if((f <= 1) && (a == 0)) 
{
    printf("YES\n");
    break;
 }
 if (f == 0) 
 {
	 printf("NO\n");
	 break;
 }
}

    return 0;
}


