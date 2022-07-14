/* PART3 Chapter4 연습문제 2
다음 프로그램을 실행하면 원하는 결과를 출력하지 않습니다.
malloc() 함수를 사용해서 잘못된 부분을 수정하세요.
*/
#include <stdio.h>

void allocate(int i);

void main(){
    int i;
    printf("필요한 메모리 공간 : ");
    scanf("%d",&i);
    allocate(i);
}

void allocate(int i){
    // int a[i]; 잘못된 예시
    int* a = (int*)malloc(i);
    printf("%d의 공간을 할당하였습니다. \n",i);
}