/* PART1 Chapter5 연습문제 1
키보드로부터 세 정수를 입력받아 (x+y)*(x+z)/(y%z)를
출력하는 프로그램을 작성하세요.
*/
#include <stdio.h>

int main(){
    int x, y, z;
    printf("input x: ");
    scanf("%d",&x);
    printf("input y: ");
    scanf("%d",&y);
    printf("input z: ");
    scanf("%d",&z);

    printf("(x+y)*(x+z)/(y%%z) = %d \n",(x+y)*(x+z)/(y%z));
    // %출력은 %%로

    return 0;
}