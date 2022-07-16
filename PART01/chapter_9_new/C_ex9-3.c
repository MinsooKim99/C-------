/* PART1 Chapter9 연습문제 3
다음 프로그램은 사칙 연산을 위해 각각 plus, minus, multiply, divide 함수를 선언하고
사용한 코드입니다. 제시한 실행 결과가 나오게 선언한 함수들을 직접 구현하세요.
실행 결과
input two numbers : 3 6
a + b = 9
a - b = -3
a * b = 18
a / b = 0.500000
변형 - a의 b승도 출력하기
*/
// 문제에 주어진 코드
#include <stdio.h>
int plus(int i, int j);
int minus(int i, int j);
int multiply(int i, int j);
double divide(int i, int j);
int square(int i, int j);
int main(){
    int a, b;
    int result;
    double result2;

    printf("input two numbers :");
    scanf("%d %d",&a,&b);
    
    result = plus(a,b);
    printf("a + b = %d \n",result);
    result = minus(a,b);
    printf("a - b = %d \n",result);
    result = multiply(a,b);
    printf("a * b = %d \n",result);
    result2 = divide(a,b);
    printf("a / b = %lf \n",result2);
    result = square(a,b);
    printf("a ^ b = %d \n",result);
    
    return 0;   
}

// 구현한 코드
int plus(int i, int j){
    return i + j;
}
int minus(int i, int j){
    return i - j;
}
int multiply(int i, int j){
    return i * j;
}
double divide(int i, int j){
    if((i && j) == 1){
        return (double)i / j;
    }
    else{
        return 0;
    }
}
int square(int i, int j){
    int result = 1;
    for(int k=0;k<j;k++){
        result *= i;
    }
    return result;
}