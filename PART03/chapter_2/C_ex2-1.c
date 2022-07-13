/* PART3 Chapter2 연습문제 1
사용자로부터 단어 하나를 입력받은 뒤, 그 문자열 내에 A부터 Z까지의 알파벳이 각각
몇 개씩 등장하는지 세어 출력하는 프로그램을 작성하세요. 대소문자를 같이 처리하고,
등장하지 않는 알파벳은 출력하지 않게 합니다. 알파벳 이외의 문자는 무시합니다.
*/
#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100
int main(){
    char input_str[MAX_SIZE];
    char output_str[MAX_SIZE] = {0,};
    char* p = NULL;
    int i;

    printf("입력: ");
    scanf("%s",input_str);
    
    p = strlwr(input_str);
    // printf("%d",strlen(p));

    for(i=0;i<strlen(p);i++){
        // if((p[i]>=96) && (p[i]<=122)){
        output_str[p[i]-97] += 1;
        // }
    }

    // printf("%d\n",output_str[0]);

    for(i=0;i<26;i++){
        if (output_str[i] != 0){
            printf("%c: %d\n",i+97,output_str[i]);
            }
    }


    return 0;
}