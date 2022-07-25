/* PART3 Chapter3 연습문제 1
프로그램상에서 파일 99.txt를 만들어서 구구단을 저장하는 프로그램을 작성하세요.
단, fprintf() 함수를 이용해야 합니다.
변형 - txt파일에 출력 후 다시 읽어와서 출력하기
*/
#include <stdio.h>

int main(){
    FILE* stream = fopen("99.txt","w");
    int i,j;
    int x,y,result,ret;

    for(i=1;i<10;i++){
        for(j=1;j<10;j++){
            fprintf(stream,"%d * %d = %d\n",i,j,i*j);
        }
    }
    fclose(stream);

    stream = fopen("99.txt","r");
    while(1){
        ret = fscanf(stream,"%d %*c %d %*c %d\n",&x,&y,&result);
        if(ret == -1){
            break;
        }
        printf("%d * %d = %d\n",x,y,result);
    }

    fclose(stream);
    return 0;
}