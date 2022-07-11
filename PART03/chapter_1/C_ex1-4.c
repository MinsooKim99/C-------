/* PART3 Chapter1 연습문제 4
다음 그림을 분석해서 그 결과를 코드로 작성하세요.
*/
#include <stdio.h>
struct point{
    int x;
    int y;
};
int main(){
    struct point s1 = {10,10};
    struct point* sp = NULL;
    sp = &s1;

    printf("%d %d\n",s1.x,s1.y);
    printf("%d %d\n",(*sp).x,(*sp).y);
    printf("%d %d\n",sp->x,sp->y);
    
    return 0;
}