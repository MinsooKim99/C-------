/* PART2 Chapter3 연습문제 6
다음과 같이 실행 결과가 출력되었습니다. 결과를 보고 코드의 (//) 부분을 완성하세요.
실행 결과
10 20 30 40 50
변형 - 2차원 배열 받아서 출력하기
*/
#include <stdio.h>
#define ROW_LEN 3
#define COL_LEN 5
// 1 함수의 선언부
void arrInput(int (*)[COL_LEN]);
int main(){
    int array[ROW_LEN][COL_LEN] = {{10,20,30,40,50},{60,70,80,90,100},{110,120,130,140,150}};
    // 2 함수 포인터의 선언부
    void (*pfunc)(int (*)[COL_LEN]);

    pfunc = arrInput;
    pfunc(array);
    
    return 0;
}
// 3 함수의 정의부
void arrInput(int (*p)[COL_LEN]){
    for(int i=0;i<ROW_LEN;i++){
        for(int j=0;j<COL_LEN;j++){
            printf("%d ",p[i][j]);
        }
    }
    printf("\n");
}