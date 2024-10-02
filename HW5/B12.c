
#include <stdio.h>
int main(void)
{
    int c;
    char  max = 0, min = 9;
    scanf("%d", &c);
    while(c) {
        char d = c % 10;
        if(d < min)
        {
			 min = d;
		 }
        if(d > max) 
        {
			max = d;
		}
        c /= 10;
    }
    printf("%d  %d\n", min, max);
    return 0;

}
