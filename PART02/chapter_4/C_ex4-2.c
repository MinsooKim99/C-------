/* PART2 Chapter4 연습문제 2
다음과 같이 실행 결과가 출력되었습니다. 결과를 보고 코드의 (//) 부분을 완성하세요.
10 20 30 40 50
10 20 30 40 50
*/
#include <stdio.h>
int main(){
    int array[5]={10,20,30,40,50};
    // 1 포인터 변수의 선언부
    int* p = NULL;

    // 2 포인터 변수의 초기화
    p = array;
    printf("%d %d %d %d %d\n",p[0],p[1],p[2],p[3],p[4]);
    printf("%d %d %d %d %d\n",*(p+0),*(p+1),*(p+2),*(p+3),*(p+4));

    return 0;
}