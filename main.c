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
	int x, y; 
	int result;
	
	scanf("%d %d", &x, &y);
	result = get_max(x, y);
	
	printf("biggest value = %d", result);
	
	return 0;
}

