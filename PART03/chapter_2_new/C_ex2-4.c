/* PART3 Chapter2 연습문제 4
사용자가 입력한 문자열의 앞뒤를 뒤집어 출력하는 프로그램을 작성하세요.
참고적으로 문자열을 뒤집는 표준 문자열 처리 함수로는 strrev()가 있습니다.
변형 - strrev 쓰지 않고 문자열 뒤집기
*/
#include <stdio.h>
#include <string.h>

int main(){
	char input_str[15];
	char output_str[15];
    int i, max;

    printf("입력: ");
    gets(input_str);

    // strrev(input_str);
    max = strlen(input_str);

    for(i=0;i<max;i++){
        output_str[i] = input_str[max-i-1];
    }
	
    printf("뒤집기: %s\n",output_str);

	return 0;
}