/* PART1 Chapter9 연습문제 1
다음 실행 결과를 보고 함수 abs()를 구현하세요.
이 함수는 키보드를 통해서 입력받는 값의 절댓값을 구하는 프로그램입니다.
실행 결과
정수를 입력하세요 : -43
절댓값은 : 43입니다.
*/
#include <stdio.h>

int abs(int);
int main(){
    int input_num, abs_num;

    printf("정수를 입력하세요 : ");
    scanf("%d",&input_num);
    abs_num = abs(input_num);
    printf("절댓값은 : %d입니다.\n",abs_num);

    return 0;
    
}
int abs(int num){
    return num<0 ? (-num) : num;
}