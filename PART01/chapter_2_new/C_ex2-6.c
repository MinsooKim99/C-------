/* PART1 Chapter2 연습문제 6
자신의 이름과 학번을 한 줄로 화면에 출력하는 C 프로그램을 작성하세요.
변형 - 이름과 학번을 입력받아서 출력하기
*/
#include <stdio.h>

int main(){
    char num[10], name[20];
    printf("학번: ");
    scanf("%s",num);

    printf("이름: ");
    scanf("%s",name);
    
    printf("%s %s \n",num,name);
    // 한글 입력 후 출력이 안된다
    
    return 0;
}