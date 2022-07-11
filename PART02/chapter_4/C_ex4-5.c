/* PART2 Chapter4 연습문제 5
다음 코드를 이용하여 실행 결과와 같은 형태로 출력하는 프로그램을 작성하세요.
char* string[2] = {"I Love C", "Hello World"};
실행 결과
I Love C World
*/
#include <stdio.h>
int main(){
    char* string[2] = {"I Love C", "Hello World"};

    printf("%s",string[0]);
    printf("%s",string[1]+5);

    return 0;
}