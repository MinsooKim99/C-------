/* PART2 Chapter5 연습문제 2
다음과 같이 실행 결과가 출력되었습니다. 결과를 보고 코드의 (//) 부분을 완성하세요.
실행 결과
10 20 30 40
50 60 70 80
*/
#include <stdio.h>
// 1 함수의 선언부
void func(int*,int (*)[2]);
int main(){
    int array1[4] = {10,20,30,40};
    int array2[2][2] = {50,60,70,80};

    func(array1,array2);
    
    return 0;
}
// 2 함수의 정의부
void func(int* p1,int (*p2)[2]){
    printf("%d %d %d %d\n",p1[0],p1[1],p1[2],p1[3]);
    printf("%d %d %d %d\n",p2[0][0],p2[0][1],p2[1][0],p2[1][1]);
}