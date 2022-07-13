/* PART1 Chapter2 연습문제 1
다음과 같은 실행 결과가 모니터에 출력되게 프로그램을 작성하세요.
  *
 ***
*****
 ***
  *
변형 - 반복문 이용해서 구현하기
*/
#include <stdio.h>
#include <stdlib.h>
#define LEN 100
#define CENTER LEN/2

int main(){
  int i, j;

  for(i=0;i<CENTER+1;i++){
    for(j=0;j<abs(i-CENTER);j++){
      printf(" ");
    }
    for(j=0;j<2*i+1;j++){
      printf("*");
    }
  printf("\n");
  }
  
  for(i=CENTER-1;i>=0;i--){
    for(j=0;j<abs(i-CENTER);j++){
      printf(" ");
    }
    for(j=0;j<2*i+1;j++){
      printf("*");
    }
  printf("\n");
  }
    
  return 0;
}
