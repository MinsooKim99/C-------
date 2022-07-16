/* PART1 Chapter5 연습문제 1
키보드로부터 세 정수를 입력받아 (x+y)*(x+z)/(y%z)를
출력하는 프로그램을 작성하세요.
변형 - 값 예측하고 맞는지 틀린지 알아보기
*/
#include <stdio.h>

int main(){
    int x, y, z, result, input_num;
    printf("input x: ");
    scanf("%d",&x);
    printf("input y: ");
    scanf("%d",&y);
    printf("input z: ");
    scanf("%d",&z);
    
    printf("question: (x+y)*(x+z)/(y%%z)\ninput your answer: ");
    scanf("%d",&input_num);

    result = (x+y)*(x+z)/(y%z);

    printf("(x+y)*(x+z)/(y%%z) = %d \n",result);
    printf("Your answer: %d\n",input_num);
    if(input_num == result)
        printf("정답!\n");
    else
        printf("오답!\n");

    return 0;
}