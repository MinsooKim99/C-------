/* PART1 Chapter7 연습문제 5
팩토리얼 연산 결과를 출력하는 프로그램을 작성하세요.
팩토리얼 연산을 위한 공식은 다음과 같습니다.
n! = n*(n-1)*...3*2*1
*/
#include <stdio.h>
int main(){
    int n, i, factorial = 1;

    printf("팩토리얼 연산을 원하는 숫자를 입력하세요 : ");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        factorial *= i;
    }

    printf("%d의 팩토리얼 연산 결과는 %d 입니다.",n,factorial);

    return 0;
}