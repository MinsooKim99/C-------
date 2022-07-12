/* PART1 Chapter2 연습문제 2
서식 문자를 이용하여 다음과 같이 구구단 2단을 출력하는 프로그램을 작성하세요.
2*1=2
2*2=2
...
2*9=18
변형 - 반복문 이용하여 구현하기
*/
#include <stdio.h>

int main(){
    int i;

    for(i=0;i<9;i++){
        printf("%d * %d = %d\n",2,(i+1),2*(i+1));
    }
    
    return 0;
}
