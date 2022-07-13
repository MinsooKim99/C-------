/* PART3 Chapter1 연습문제 10
다음 실행 결과를 보고 func1()함수와 func2()함수를 완성하세요.
실행 결과
10 10
20 20
*/
#include <stdio.h>
struct point{
    int x;
    int y;
};
// 함수 선언부
void func1(struct point);
void func2(struct point*);

void main(){
    struct point p1 = {10,10};
    struct point p2 = {20,20};

    func1(p1);
    func2(&p2);
}
// 함수 정의부
void func1(struct point call){
    printf("%d %d\n",call.x,call.y);
}

void func2(struct point* call){
    // printf("%d %d\n",(*call).x,(*call).y);
    printf("%d %d\n",call->x,call->y);
}