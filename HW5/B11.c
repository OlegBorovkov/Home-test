#include <stdio.h>

int main (void)
{
    int  a, g, i;
    scanf("%d", &a); 
     i = 0;
  while(a >0){
	
		
g = a%10;
        //printf("%d g\n", g);		
a = a/10;
        //printf("%d a\n", a);
i = i*10 +g;
       // printf("%d i\n", i);
}
printf("%d\n", i);
    return 0;
}


