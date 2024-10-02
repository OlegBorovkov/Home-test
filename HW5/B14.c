#include <stdio.h>
 
int main(){
    int m[100000], i = 0, f = 0;;
    for(; i <100000; ++i)
    {
        scanf("%d", &m[i]);
        f = f + 1;
        
        if(m[i] == 0)
        {
			f = f - 1;
			break;
 }
 }
    
	
 printf("%d\n", f);
    return 0;
}
