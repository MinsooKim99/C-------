/* PART1 Chapter6 연습문제 2
다음 코드를 실행하면 예상하지 못한 이상한 값이 출력됩니다. 이유는 무엇입니까?
또한 "c=200"이라는 결과가 출력되도록 하고 싶다면 어떻게 해야 합니까?
변형 - 음수를 쓰지 않고 -128 출력하기
*/
#include <stdio.h>
int main(){
    unsigned char c = 200;
    char c_signed = 128;
    // char자료형의 표현 범위: -128~127
    // unsigned char자료형의 표현 범위: 0~255

    printf("c = %d\n",c);
    printf("signed c = %d\n",c_signed);

    return 0;
}