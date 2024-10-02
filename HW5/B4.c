#include <stdio.h>

int main (void)
{
    int  b;
    scanf("%d", &b); 
    int c = 0;
 
 do{
	 b = b/10;
	 ++c;
}
  while(b!= 0);   
  if(c == 3) 
 {
	 printf("YES");
 }
 else {
	 printf("NO"); 
 }
   return 0;
}
