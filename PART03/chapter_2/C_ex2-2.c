/* PART3 Chapter2 연습문제 2
사용자로부터 최대 10개의 단어를 입력받아 정렬하는 프로그램을 작성하세요.
사전식 순서로 작은 단어가 앞에 와야 합니다. 단, 각각의 단어는 15글자를 넘지 않는다고 가정합니다.
*/
#include <stdio.h>
#include <string.h>

int main(){
	char input_str[10][15], temp[15];
	int i=0, j=0, max;

	printf("입력을 종료하려면 그냥 엔터를 누르세요.\n");
	//입력
	for(i=0;i<10;i++){
		printf("%d번째? ",i+1);
		gets(temp);
		
		max = i;
		//문자열 길이 점검
		if(strlen(temp)==0){
			//max = i;
			break;
		}
		strcpy(input_str[i], temp);
	}

	//정렬
	for(i=max; i>=0; i--){
		for(j=max; j>i; j--){
			if((strcmp(input_str[i], input_str[j]) > 0) && (strlen(input_str[i]) != 0) && (strlen(input_str[j]) != 0)){
				strcpy(temp, input_str[i]);
				strcpy(input_str[i], input_str[j]);
				strcpy(input_str[j], temp);
			}
		}
	}
	printf("input_str[0]: %s\n",input_str[0]);
	printf("input_str[1]: %s\n",input_str[1]);
	printf("input_str[2]: %s\n",input_str[2]);
	//출력
	for(i=0;i<=max;i++){
		printf("%s  ", input_str[i]);
	}
	puts("");
	return 0;
}