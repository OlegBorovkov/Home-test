#include <stdio.h>
 
int main(){
    int a = 0, b = 0;
   scanf("%d %d", &a, &b); 
    while(a != b)
    {
     
     if(a != b)
     {
		 if(a > b)
		 {
			 a = a - b;
		 }
		 else
		 {
			 b = b - a;
		 }	
	//	 printf("a1 %d\n", a);
	//	 printf("b1 %d\n", b);
}
 if(a == b)
 {
printf("%d\n", a);	 

}
}
 
	
    return 0;
}
