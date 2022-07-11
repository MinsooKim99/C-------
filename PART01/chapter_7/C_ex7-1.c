/* PART1 Chapter7 연습문제 1
임의의 양의 정수(n)을 입력받아 1~100 사이에서 n의 배수의 개수를 출력하는 프로그램을 작성하세요.
*/
#include <stdio.h>
int main(){
    int n, i = 1;
    printf("양의 정수 입력 : ");
    scanf("%d",&n);

    for(i = 1;n*i<100;i++){
        //printf("%d\n",n * i);
    }
    printf("배수의 개수 : %d\n",i-1);

    return 0;
}