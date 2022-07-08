/* PART1 Chapter2 연습문제 5
두 정수를 입력받아 두 숫자의 합과 차를 출력하는 프로그램을 작성하려 합니다.
출력 결과는 다음의 형식을 따릅니다. 단, 출력되는 모든 숫자는
소스 코드에 직접 작성해서는 안됩니다.
실행 결과
두 정수를 입력하세요: 45 23
합: 45 + 23 = 68
차: 45 - 23 = 22
*/
#include <stdio.h>

int main(){

    int num1, num2;

    printf("숫자 2개를 입력하세요\n");
    scanf("%d %d",&num1,&num2);

    printf("합: %d + %d = %d\n차: %d - %d = %d\n",
        num1,num2,num1+num2,num1,num2,num1-num2);
    
    
    return 0;
}