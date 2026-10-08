#include <stdio.h>

//factorial 계산 함수
int factorial(int a)
{
    int i, res = 1;
    for(i=0; i<a; i++)
    res = res*(i+1);

    return res;
}

//combination 계산 함수
int combination(int n, int r)
{
int up, down;
up = factorial(n);
down = factorial(n-r)*factorial(r);
return up/down;
}

int main(void)
{
int n, r, result; //변수 선언
printf("input n: ");
scanf("%d", &n); //입력 받기
printf("input r: ");
scanf("%d", &r);
//combination 계산
result = combination(n, r);
//결과 출력
printf("the combination result is %i\n", result);
}


