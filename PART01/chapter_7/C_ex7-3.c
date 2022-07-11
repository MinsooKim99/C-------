/* PART1 Chapter7 연습문제 3
반복문을 이용해서 다음과 같은 결과를 출력하는 프로그램을 작성하세요.
실행 결과
*******
 *****
  ***
   *
*/
#include <stdio.h>
int main(){
    int n, i=0, j;

    // i: 줄
    // j: * 출력
    for(;i<5;i++){          // 5줄이니 5번반복
        for(j=0;j<i;j++){  
            printf(" ");    // i만큼 공백 주기
        }
        for(j=0;j<7-(2*i);j++){
            printf("*");    // 7-(2*i)만큼 * 출력
        }
        printf("\n");       // 한줄 끝내고 개행
    }

    return 0;
}