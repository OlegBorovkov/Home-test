#include <stdio.h>

int main (void)
{
    int  a, b, c,;
    scanf("%d", &a); 
    b = 0;
    c = 0;
    
    while(a > 0){
 g = a%10;		
 b = (a/10)%10;
 c = (a/100)%10;
 d = (a/1000)%10;
 e = (a/10000)%10;
 a = a/10;

 f = g+b+c+d+e;

 if(f == 10) 
{
    printf("YES\n");
    break;
 }
 if (f != 10)
 {
	 printf("NO\n");
	 break;
 }
}

    return 0;
}

