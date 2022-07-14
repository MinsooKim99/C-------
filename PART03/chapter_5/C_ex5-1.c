/* PART3 Chapter5 연습문제 1
사칙연산 프로그램을 구성하는 +, -, *, / 함수의 선언을 myheader.h로 구성하고
함수의 정의 부분은 myfunc.c로 그리고 main() 함수에서 사칙연산 함수들을 호출해서
결과를 확인하는 파일 main.c를 작성하세요.
*/
#include <stdio.h>
#include <stdlib.h>
void main(){
    int i, j;
    int* ip = NULL;
    char* cp = NULL;
    float* fp = NULL;

    printf("필요한 메모리 공간 : ");
    scanf("%d",&i);
    printf("저장 데이터 유형 (1)int, (2)char, (3)float : ");
    scanf("%d",&j);

    if(j==1){
        // ip = (int*)malloc(i*sizeof(int));        // malloc
        ip = (int*)calloc(i,sizeof(int));           // calloc
        printf("메모리 시작 주소 : %d \n",ip);
        printf("할당된 전체 메모리 공간 : %d바이트\n",i*sizeof(int));
    }
    else if(j==2){
        // cp = (char*)malloc(i*sizeof(char));      // malloc
        cp = (char*)calloc(i,sizeof(char));         // calloc
        printf("메모리 시작 주소 : %d \n",cp);
        printf("할당된 전체 메모리 공간 : %d바이트\n",i*sizeof(char));
    }
    else if(j==3){
        // fp = (float*)malloc(i*sizeof(float));    // malloc
        fp = (float*)calloc(i,sizeof(float));       // calloc
        printf("메모리 시작 주소 : %d \n",fp);
        printf("할당된 전체 메모리 공간 : %d바이트\n",i*sizeof(float));
    }
    else
        printf("잘못된 입력 \n");
}