/* PART1 Chapter3 연습문제 1
다음 코드에서 잘못 선언된 변수를 찾고 수정하세요.
#include <stdio.h>

void main(){
    int int;
    int 2010_ymca;
    int freeLec;
    int a A;

    printf("howTo = %d",howTo);
    int howTo = 20;

    int one+two;
}
*/
#include <stdio.h>

void main(){
    int i;              // int는 미리 정의된 단어다.
    int ymca_2010;      // 변수명은 숫자로 시작할 수 없다.
    int freeLec;        // 문제 없다.
    int aA;             // 변수명엔 공백이 허용되지 않는다.
    int howTo = 20;     // 변수를 사용하기 전에 선언이 되어야 한다.

    printf("howTo = %d",howTo);

    int one_plus_two;   // 변수는 문자, 숫자, _ 이외의 문자는 허용되지 않는다.
}