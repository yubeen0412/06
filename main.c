#include <stdio.h>

int n, r;

int main(void)
{
	get_interger();
	printf("combination=%d\n", combination(n, r));
	return 0;
	
}

int combination (int n, int r)
{
	return (factorial(n) / (factorial(r)*factorial(n-r)));
}

int factorial (int num)
{
	int i, res=1;
	
	for(i=1; i<=num; i++)
		res = res*i;
	return res;
}

int get_interger ()
{
	printf("input n:");
	scanf("%d", &n);
	printf("input r:");
	scanf("%d", &r);
	return 0;
}