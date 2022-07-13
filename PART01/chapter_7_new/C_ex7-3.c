/* PART1 Chapter7 연습문제 3
반복문을 이용해서 다음과 같은 결과를 출력하는 프로그램을 작성하세요.
실행 결과
*******
 *****
  ***
   *
변형 - 상수로 일반화 하기
*/
#include <stdio.h>
#define LEN 50
#define SIZE 2*LEN-1
int main(){
    int n, i=0, j;

    // i: 줄
    // j: * 출력
    for(;i<LEN;i++){        // 5줄이니 5번반복
        for(j=0;j<i;j++){  
            printf(" ");    // i만큼 공백 주기
        }
        for(j=0;j<SIZE-(2*i);j++){
            printf("*");    // SIZE-(2*i)만큼 * 출력
        }
        printf("\n");       // 한줄 끝내고 개행
    }

    return 0;
}