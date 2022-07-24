/* PART3 Chapter2 연습문제 4
사용자가 입력한 문자열의 앞뒤를 뒤집어 출력하는 프로그램을 작성하세요.
참고적으로 문자열을 뒤집는 표준 문자열 처리 함수로는 strrev()가 있습니다.
*/
#include <stdio.h>
#include <string.h>

int main(){
	char input_str[15];

    printf("입력: ");
    gets(input_str);

    strrev(input_str);
	printf("뒤집기: %s\n",input_str);

	return 0;
}