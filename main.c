#include <stdio.h>

int sumTwo(int a, int b)
{
    return (a+b);
}

int square(int n)
{
    return (n*n);
}

int get_Max(int x, int y)
{
    if (x>y)
        return x;
    
    else
        return y;
}

int main(void)
{
    printf("sumTwo result : %d\n", sumTwo(266, 567));
    printf("square result : %d\n", square(4));
    printf("get_Max result : %d\n", get_Max(8, 3));
}