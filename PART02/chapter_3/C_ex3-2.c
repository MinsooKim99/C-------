/* PART2 Chapter3 연습문제 2
다음 코드를 분석해서 그 결과를 그림으로 나타내세요.
*/
#include <stdio.h>
int main(){
    int a=10;
    int b=20;
    int temp;

    int* p1 = NULL;
    int* p2 = NULL;

    p1=&a;      // p1은 a의 주소
    p2=&b;      // p2는 b의 주소

    temp = *p1; // p1과 p2가
    *p1=*p2;    // 가리키는 주소를
    *p2=temp;   // 바꾸는 과정

    printf("%d %d \n",a,b); // 20 10 출력
    
    return 0;
}