/* PART1 Chapter8 연습문제 1
다음 실행 결과를 만족하는 프로그램을 작성하세요.
실행 결과
두 개의 정수를 입력하세요 : 4 6
큰 수는 6입니다.

두 개의 정수를 입력하세요 : 5 5
두 수는 같습니다.
*/
#include <stdio.h>
int main(){
    int num1,num2;
    printf("두 개의 정수를 입력하세요 : ");
    scanf("%d",&num1);
    scanf("%d",&num2);

    if(num1 == num2){
        printf("두 수는 같습니다.\n");
    }
    else{
        printf("더 큰 수는 %d\n",num1>num2?num1:num2);
    }
    return 0;
}