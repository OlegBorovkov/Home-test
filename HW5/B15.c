#include <stdio.h>
 
int main(){
    int m[100000], i = 0, f = 0, h = 0, n = 0;
    for(; i <100000; ++i)
    {
        scanf("%d", &m[i]);
        h =  m[i];
        f =  h%2;
        if((f == 0) && (h != 0))
{ 
n = n + 1;
}
       // printf("h %d\n", h);
       //  printf("f %d\n", f);
       //printf("m %d\n", m[i]);
       
       
        if(m[i] == 0)
        {
			break;
 }
 }
  printf("%d\n", n);  
	
    return 0;
}
