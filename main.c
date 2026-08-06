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
	int a, b; 
	int result;
	
	scanf("%d %d", &a, &b);
	result = sumTwo(a,b);
	
	printf("sum = %d", result);
	
	return 0;
}

