/* PART2 Chapter4 연습문제 5
다음 코드를 이용하여 실행 결과와 같은 형태로 출력하는 프로그램을 작성하세요.
char* string[2] = {"I Love C", "Hello World"};
실행 결과
I Love C World
변형 - 문장사이에 공백갯수 세기
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    char* string[2] = {"I Love C", "Hello World"};
    int i, j, count[2] = {0,};

    for(i=0;i<2;i++){
        for(j=0;j<strlen(string[i]);j++){
            if(isspace(string[i][j])){
                count[i]++;
            }
        }
    }
    
    for(i=0;i<2;i++){
        printf("%d번째 문자열의 공백개수: %d\n",i+1,count[i]);
    }

    return 0;
}