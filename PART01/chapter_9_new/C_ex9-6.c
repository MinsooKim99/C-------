/* PART1 Chapter9 연습문제 6
두 정수를 입력받아 덧셈을 하는 함수 Add()와 연산을 몇 번 수행했는지 세는 Count()
함수를 작성하세요. 단, 총 연산은 100번으로 제한하며 두 정수 모두 0을 입력하면 종료
합니다. 결과를 다음과 같이 출력하는 프로그램을 작성하세요. 정적 변수를 이용하세요.
변형 - 정적 변수 쓰지 않기
*/
#include <stdio.h>

int Add(int, int);
void Count(int*);

// static int i = 0;
int main(void) {
  int a, b, i = 0;
  int* p = NULL;
  p = &i;

  while(i<100){
    printf("숫자 2개 입력: ");
    scanf("%d %d",&a, &b);
    
    if (a || b){
      printf("%d + %d = %d\n", a, b, Add(a,b));
      Count(p);
    }
    else{
      printf("총 연산 수: %d\n", i);
      return 0;
    }
  }  

  return 0;
}
int Add(int x, int y){
  return x + y;
}
void Count(int* p){
  (*p)++;
}
