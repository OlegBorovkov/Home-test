#include <stdio.h>

int main()
{
    int a, s;
 
    scanf("%d",&a);
    
    s = 0;
    while (a > 0)  {
        s += a%10;
        a /= 10;
    }
 
    printf("%d\n",s);
    return 0;
}

