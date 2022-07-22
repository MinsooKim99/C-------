/* PART3 Chapter1 연습문제 10
다음 실행 결과를 보고 func1()함수와 func2()함수를 완성하세요.
실행 결과
10 10
20 20
변형 - 구조체 내부에 서로를 가리키는 link 포인터 생성하고 값 출력하기
*/
#include <stdio.h>
struct point{
    int x;
    int y;
    struct point* link;
};
// 함수 선언부
void func1(struct point);
void func2(struct point*);
void main(){
    struct point p1 = {10,10,NULL};
    struct point p2 = {20,20,NULL};

    p1.link = &p2;
    p2.link = &p1;

    func1(p1);
    func2(&p2);
}
// 함수 정의부
void func1(struct point call){
    printf("p1:\t%d %d\n",call.x,call.y);
    printf("p1.link:%d %d\n",call.link->x,call.link->y);
}

void func2(struct point* call){
    printf("p2:\t%d %d\n",call->x,call->y);
    printf("p2->link:%d %d\n",call->link->x,call->link->y);
}