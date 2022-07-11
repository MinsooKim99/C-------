/* PART1 Chapter7 연습문제 6
간단한 덧셈 계산기를 작성합니다. 하지만 계산 결과를 출력한 후 종료되지 않고
다음 계산을 위해 입력을 받을 준비를 합니다.
*/
#include <stdio.h>
int main(){
    int num1, num2;

    while(1){
        printf("첫 번째 수를 입력해 주세요 : ");
        scanf("%d",&num1);
        printf("두 번째 수를 입력해 주세요 : ");
        scanf("%d",&num2);
        printf("%d + %d = %d입니다.\n",num1,num2,num1+num2);
    }



    return 0;
}