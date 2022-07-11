/* PART2 Chapter5 연습문제 4
다음 swap()함수의 메모리 구조를 그림을 통해 분석하세요.
*/
#include <stdio.h>

void swap(int*,int *);

int main(){
    int i=10, j=20;

    printf("main() : i = %d, j = %d \n",i, j);
    swap(&i,&j);
    printf("main() : i = %d, j = %d \n",i, j);

    return 0;
}

void swap(int* a, int* b){
    int temp;   // a와 b가
    temp = *a;  // 가리키는
    *a = *b;    // 주소
    *b = temp;  // 교환
}