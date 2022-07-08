/* PART1 Chapter3 연습문제 4
생년월일을 변수에 저장하고, 이를 출력하는 프로그램을 작성하세요.
*/
#include <stdio.h>

int main(){
    int birthYear, birthMonth, birthDate;
    birthYear = 1999;
    birthMonth = 6;
    birthDate = 9;

    printf("나의 생일은 %d년 %d월 %d일 입니다. \n",birthYear,birthMonth,birthDate);

    return 0;
}