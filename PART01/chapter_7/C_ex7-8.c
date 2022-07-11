/* PART1 Chapter7 연습문제 8
키보드로부터 정수를 계속 입력받아 덧셈 연산을 수행합니다. 만약 0이 입력되면
지금까지 입력한 정수의 덧셈 결과와 총 몇번을 입력했는지를 출력하는 프로그램을 작성하세요.
*/
#include <stdio.h>
int main(){
    int n=-1, i = 0, sum=0;
    while(n != 0){
        printf("정수 입력 : ");
        scanf("%d",&n);
        sum+=n;
    }

    printf("입력한 수의 총합은 %d점입니다.\n",sum);

    return 0;
}