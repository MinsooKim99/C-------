/* PART3 Chapter2 연습문제 6
알파벳 문자열을 키보드로부터 입력받아 입력한 문자열의 개수를 출력하고,
영문자의 대문자는 소문자로 소문자는 대문자로 변환하여 출력하는 프로그램을 작성하세요.
변형 - 기능 함수로 빼기
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
char* GetStr();
void ChangeStr(char*, int);
int main(){
	char* p = NULL;
	p = GetStr();

	ChangeStr(p,strlen(p));

	printf("결과: %s\n",p);

	return 0;
}
char* GetStr(){
	char* input_str = (char*)malloc(sizeof(char) * 15);

	printf("입력: ");
    gets(input_str);
	printf("개수: %d\n",strlen(input_str));

	return input_str;
}
void ChangeStr(char *p, int len){
	int i;
	for(i=0;i<len;i++){
		if (isupper(p[i])){
			p[i] = p[i] + 32;
		}
		else{
			p[i] = p[i] - 32;
		}
	}
}