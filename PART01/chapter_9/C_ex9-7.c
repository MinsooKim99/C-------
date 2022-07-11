/* PART1 Chapter9 연습문제 7
알파벳 문자 하나를 입력받아 알파벳 순서로 몇 번째 문자인지 출력하는 프로그램을 작
성하세요. 단, 몇 번째 알파벳 문자인지 판단하는 Alpha() 함수를 작성하세요. char형과
int형은 덧셈과 뺄셈 연산이 가능합니다.
*/
#include <stdio.h>

int Alpha(char);
int main(){
    
    char input_char;
    printf("알파벳을 입력하세요 : ");
    scanf("%c",&input_char);
    
    printf("입력한 %c는 알파벳 순서로 %d번째 문자입니다.\n",input_char,Alpha(input_char));
    
    return 0;
}
int Alpha(char c){
    if (c < 91)
        return c - 64;
    else
        return c - 96;
}