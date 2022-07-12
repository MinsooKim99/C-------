/* PART1 Chapter8 연습문제 3
다음 실행 예는 점수에 따라 해당 등급의 문자를 반환하는 프로그램입니다. 입력되는 점수는
항상 100 이하이며 점수가 90-100이면 A, 80-89면 B, 그 외에는 F를 반환합니다.
switch문으로 작성하세요.
*/
#include <stdio.h>
int main(){
    int num;
    printf("점수를 입력하세요 : ");
    scanf("%d",&num);
    num = num/10;

    switch(num){
        case 10:
        case 9:
            printf("A입니다.\n");
            break;
        case 8:
            printf("B입니다.\n");
            break;
        default:
            printf("F입니다.\n");
            break;
    }

    return 0;
}