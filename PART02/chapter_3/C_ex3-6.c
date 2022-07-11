/* PART2 Chapter3 연습문제 6
다음과 같이 실행 결과가 출력되었습니다. 결과를 보고 코드의 (//) 부분을 완성하세요.
실행 결과
10 20 30 40 50
*/
#include <stdio.h>
// 1 함수의 선언부
void arrInput(int*,int);
int main(){
    int array[5] = {10,20,30,40,50};
    // 2 함수 포인터의 선언부
    void (*pfunc)(int*,int);

    pfunc = arrInput;
    pfunc(array,5);
    
    return 0;
}
// 3 함수의 정의부
void arrInput(int* p, int len){
    for(int i=0;i<len;i++){
        printf("%d ",p[i]);
    }
    printf("\n");
}