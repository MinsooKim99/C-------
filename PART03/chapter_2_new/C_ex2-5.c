/* PART3 Chapter2 연습문제 5
다음 실행 결과와 같이 정수 형태의 문자열을 입력받아 정수로 바꾸는 프로그램을 작성하세요.
문자열을 입력하세요: 12345
문자열을 정수로 출력: 12345
변형 - 동적할당을 이용하고 데이터의 크기를 계산해 출력하기
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
	// char input[15];
	char* input = (char*)malloc(sizeof(char)*15);
    int* output = (int*)malloc(sizeof(int));

    printf("입력: ");
    gets(input);

    printf("문자열을 입력하세요: %s\n",input);
    *output = atoi(input);

    printf("문자열을 정수로 출력: %d\n",*output);
    printf("입력한 데이터의 크기: %d\n",sizeof(*input) * 15);
    printf("출력한 데이터의 크기: %d\n",sizeof(*output));

	return 0;
}