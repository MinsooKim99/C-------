/* PART3 Chapter1 연습문제 3
다음 코드를 분석해서 그 결과를 그림으로 나타내세요.
*/
#include <stdio.h>
struct point{
    int x;
    int y;
};
int main(){
    struct point p;
    p.x = 3;
    p.y = 4;
    printf("%d %d \n",p.x,p.y);
    printf("%x %x %x \n",&p, &p.x, &p.y);
    // 실행 결과
    // 3 4 
    // 61fe18 61fe18 61fe1c 
    // p의 주소와 p.x의 주소는 같다
    
    return 0;
}