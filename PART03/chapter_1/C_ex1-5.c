/* PART3 Chapter1 연습문제 5
다음 코드를 보고 결과를 예측하세요.
*/
#include <stdio.h>
struct point{
    int x;
    int y;
};
int main(){
    struct point array[2] = {1,1,2,2};
    struct point* p = NULL;

    p=array;
    printf("%d %d\n",array[0].x,array[0].y);    // 1 1
    printf("%d %d\n",array[1].x,array[1].y);    // 2 2
    
    printf("%d %d\n",p[0].x,p[0].y);            // 1 1
    printf("%d %d\n",p[1].x,p[1].y);            // 2 2

    printf("%d %d\n",p->x,p->y);                // 1 1
    printf("%d %d\n",(p+1)->x,(p+1)->y);        // 2 2

    return 0;
}