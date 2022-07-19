/* PART2 Chapter5 연습문제 2
다음과 같이 실행 결과가 출력되었습니다. 결과를 보고 코드의 (//) 부분을 완성하세요.
실행 결과
10 20 30 40
50 60 70 80
변형 - 구조체 배열 만들어서 데이터 접근하기
*/
#include <stdio.h>

typedef struct student{
    int score;
}STUDENT;

void func(STUDENT*,STUDENT (*)[2]);
int main(){
    STUDENT array1[4] = {10,20,30,40};
    STUDENT array2[2][2] = {{50,60},{70,80}};

    func(array1,array2);

    return 0;
}

void func(STUDENT* p1,STUDENT (*p2)[2]){
    printf("%d %d %d %d\n",p1[0].score,p1[1].score,
        p1[2].score,p1[3].score);
    printf("%d %d %d %d\n",p2[0][0].score,p2[0][1].score,
        p2[1][0].score,p2[1][1].score);
}