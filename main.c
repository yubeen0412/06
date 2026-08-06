#include <stdio.h>

int sumTwo(int a, int b) { 
	return a+b;
} 

int square(int n) { 
	return n*n;}

int get_max(int x, int y) { 
	int b;
	if(x>y) b=x;
	else
	b=y;
	return b;}
	
int main(void) {
	int n; 
	int result;
	
	scanf("%d", &n);
	result = square(n);
	
	printf("%d*%d = %d", n, n, result);
	
	return 0;
}

