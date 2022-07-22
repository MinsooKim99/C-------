/* PART3 Chapter3 연습문제 1
프로그램상에서 파일 99.txt를 만들어서 구구단을 저장하는 프로그램을 작성하세요.
단, fprintf() 함수를 이용해야 합니다.
*/
#include <stdio.h>

int main(){
    FILE* stream = fopen("99.txt","w");
    int i,j;

    for(i=1;i<10;i++){
        for(j=1;j<10;j++){
            fprintf(stream,"%d * %d = %d\n",i,j,i*j);
        }
    }

    fclose(stream);

    return 0;
}