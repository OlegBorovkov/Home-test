#include <stdio.h>

int main (void)
{
    int  a;
    scanf("%d", &a); 
 if((a < 3) || (a > 11)){
	 printf("winter");  
 }       
 if((a > 2) && (a < 6)) {
	 printf("spring");
 }
 if((a > 5) && (a < 9)) {
	 printf("summer");
  } 
 if((a > 8) && (a < 12)) {
	 printf("autumn");   
 }            
    return 0;
}
