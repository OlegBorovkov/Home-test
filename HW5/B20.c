#include <stdio.h>
#include <math.h>
 
int main(void){
  int n, i, maxval;
  scanf("%d", &n);
  maxval = sqrt(n);
  if(n == 1)
  {
	  printf("NO\n");
      return 0;
  }
  for(i = 2; i<=maxval; i++)
  {
    if( n%i == 0)
    {
      printf("NO\n");
      return 0;
    }
  }
  printf("YES\n");
  return 0;
}
