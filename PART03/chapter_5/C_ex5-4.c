/* PART3 Chapter5 연습문제 4
다음 코드를 보고 파일 main.c를 완성하세요.
\* point.h *\
struct point                    // 구조체 선언
{
    int x;
    int y;
};

typedef struct point POINT;         //struct point를 POINT로 재정의
extern int add(int a, int b);       //extern 생략 가능
extern int subtract(int a, int b);  // extern 생략 가능
\* point.c *\
int add(int a, int b)
{
    return a+b;
}

int subtract(int a, int b)
{
    return a-b;
}
*/

#include <stdio.h>
#include "point.h"

int main(){
    POINT p;

    printf("x: ");
    scanf("%d",&p.x);
    printf("y: ");
    scanf("%d",&p.y);

    printf("add: %d\n",add(p.x,p.y));
    printf("subtract: %d\n",subtract(p.x,p.y));

    return 0;
}