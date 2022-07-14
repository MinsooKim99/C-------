/* PART3 Chapter3 연습문제 6
4번 문제에서 번호를 입력하면 이름과 총점이 검색될 수 있도록 프로그램을 수정하세요.
*/
#include <stdio.h>

int main(){
    FILE* stream = fopen("score.txt","r");

    fseek(stream,  0, SEEK_END);
    fprintf(stdout, "score size : %d byte \n", ftell(stream));


    fclose(stream);

    return 0;
}