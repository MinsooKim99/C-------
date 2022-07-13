/* PART1 Chapter7 연습문제 2
반복문을 이용해서 다음과 같은 결과를 출력하는 프로그램을 작성하세요.
실행 결과
*
**
***
****
*****
변형 - 위 아래 뒤집어서 출력하기
*/
#include <stdio.h>
int main(){
    int n, i=0, j=0;

    for(;i<5;i++){
        for(;j<i+1;j++){
            printf("*");
        }
        j = 0;
        printf("\n");
    }

    printf("---------------------\n");

    for(i=4;i>=0;i--){
        for(;j<i+1;j++){
            printf("*");
        }
        j = 0;
        printf("\n");
    }

    return 0;
}