/* PART3 Chapter3 연습문제 6
4번 문제에서 사용된 score.txt의 파일의 크기를 구하는 프로그램을 작성하세요.
fseek()함수와 ftell() 함수를 이용하면 됩니다.
*/
#include <stdio.h>

int main(){
    FILE* stream = fopen("score.txt","r");

    fseek(stream,  0, SEEK_END);
    fprintf(stdout, "score size : %d byte \n", ftell(stream));


    fclose(stream);

    return 0;
}