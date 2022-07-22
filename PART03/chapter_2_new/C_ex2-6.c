/* PART3 Chapter2 연습문제 6
알파벳 문자열을 키보드로부터 입력받아 입력한 문자열의 개수를 출력하고,
영문자의 대문자는 소문자로 소문자는 대문자로 변환하여 출력하는 프로그램을 작성하세요.
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
	char input_str[15];
	char* p = input_str;
	int i;

	printf("입력: ");
    gets(input_str);

	printf("개수: %d\n",strlen(input_str));

	for(i=0;i<strlen(input_str);i++){
		if (isupper(input_str[i])){
			p[i] = input_str[i] + 32;
			// input_str[i] = input_str[i] + 32;
		}
		else{
			p[i] = input_str[i] - 32;
			// input_str[i] = input_str[i] - 32;
		}
	}

	printf("결과: %s\n",p);

	return 0;
}