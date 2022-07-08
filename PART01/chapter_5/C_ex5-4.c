/* PART1 Chapter5 연습문제 4
사용자로부터 정수 세 개를 입력받아 정수형 변수 a,b,c에 각각 저장한 후,
조건 연산자를 사용하여 이들 변수 중 가장 큰 값을 출력하는
프로그램을 작성하세요.
*/
#include <stdio.h>

int main(){
    int a, b, c;
    printf("a: ");
    scanf("%d",&a);
    printf("b: ");
    scanf("%d",&b);
    printf("c: ");
    scanf("%d",&c);

    if((a>b) && (a>c)){
        printf("Max num = %d\n",a);
    }
    else if(b>c){
        printf("Max num = %d\n",b);
    }
    else{
        printf("Max num = %d\n",c);
    }

    return 0;
}