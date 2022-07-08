/* PART1 Chapter4 연습문제 3
소문자 a를 저장하는 변수를 하나 만들고, 부록의 ASCII코드 표를 참고하여 대문자 A를
출력하는 프로그램을 작성하세요. 소문자와 대문자의 차이를 덧셈 또는 뺄셈하면 됩니다.
*/
#include <stdio.h>

int main(){
    char c = 'a';
    printf("a의 대문자는 %c",c-32);
    
    return 0;
}