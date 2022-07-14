/* PART3 Chapter3 연습문제 2
연습 문제 1번을 이번엔 fputc() 함수만 사용해서 구현해 보세요.
1번의 답과 비교하여 어떤 방법이 더 효율적인지 비교해 보세요.
*/
#include <stdio.h>

int main(){
    FILE* stream = fopen("99.txt","w");
    int i,j,result;

    for(i=1;i<10;i++){
        for(j=1;j<10;j++){
            fputc(i+48,stream);
            fputc(' ',stream);
            fputc('*',stream);
            fputc(' ',stream);
            fputc(j+48,stream);
            fputc(' ',stream);
            fputc('=',stream);
            fputc(' ',stream);
            result = i*j;
            if (result/10)
                fputc((result/10)+48,stream);
            fputc((result%10)+48,stream);
            fputc('\n',stream);
        }
    }

    fclose(stream);

    return 0;
}