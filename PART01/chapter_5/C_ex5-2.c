/* PART1 Chapter5 연습문제 2
두 수를 입력받아서 둘 중 작은 값을 구하여 출력하는 프로그램을 작성하세요.
단, 두 수가 같으면 '같음'을 출력합니다. 조건 연산자를 이용하세요.
*/
#include <stdio.h>

int main(){
    int x, y;
    printf("input: ");
    scanf("%d",&x);
    printf("input: ");
    scanf("%d",&y);

    if(x == y){
        printf("같음 \n");
    }
    else{
        printf("Smaller Number: %d \n",x>y ? y : x);
    }
    return 0;
}