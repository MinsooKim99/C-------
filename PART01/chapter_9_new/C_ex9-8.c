/* PART1 Chapter9 연습문제 8
1부터 n까지의 합을 구하는 간단한 재귀 함수를 작성해 보세요. 간단히 반복문으로도 간
단히 구현할 수 있지만, 반드시 재귀 함수를 통해 구현해 보세요. 팩토리얼의 계산과 크
게 다르지 않습니다.
변형 - 1부터 n까지의 곱을 구하는 간단한 재귀 함수 작성하기
*/
#include <stdio.h>

int sum(int);
int factorial(int);
int main(){
    int input_num;
    printf("input your number = ");
    scanf("%d",&input_num);

    printf("1부터 %d까지의 합 = %d\n",input_num,sum(input_num));
    printf("1부터 %d까지의 곱 = %d\n",input_num,factorial(input_num));

    return 0;
}
int sum(int n){
    if(n <= 1)
        return 1;
    else
        return n + sum(n-1);
}
int factorial(int n){
    if(n<=1)
        return 1;
    else
        return n * factorial(n-1);
}