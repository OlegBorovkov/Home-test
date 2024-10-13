#include <stdio.h>

int Func(int x)
{
	int f;
	if((-2 <= x) && (x < 2))
	{
		f = x*x;
	}
		if(x >= 2)
		{
			f = x * x +(4*x) + 5;
		}
			if(x < -2)
			{
				f = 4;
			}
		
	return f;
}
int Min( int a)
{       
	int max = 0, min = 0;  
	                                    
	if(a <=  min)
	{
		min = a;
	}
		if(a > max)
		{
		if((min == 0) && (max == 0))
		{
			max = a;
			min = max;
		}
			max = a;
		}
		return max;
} 
void Print (int a)
{
	printf("%d", a);
}
int main()
{
	int aa = 1, bb = 0, d = 0;
	 
	while(aa != 0) 
	{
		scanf("%d", &aa);
		if(aa != 0)
		{	
		bb = Func(aa);
		d = Min(bb);
		}
	 }  
	 Print(d);
	
	return 0;
}


