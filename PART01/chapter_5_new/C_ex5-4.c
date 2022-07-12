/* PART1 Chapter5 연습문제 4
사용자로부터 정수 세 개를 입력받아 정수형 변수 a,b,c에 각각 저장한 후,
조건 연산자를 사용하여 이들 변수 중 가장 큰 값을 출력하는
프로그램을 작성하세요.
변형 - 가장 작은 값도 출력
*/
#include <stdio.h>

int main(){
    int a, b, c;
    int max_num,min_num;

    printf("a: ");
    scanf("%d",&a);
    printf("b: ");
    scanf("%d",&b);
    printf("c: ");
    scanf("%d",&c);

    if((a>b) && (a>c)){
        max_num = a;
        if(b<c){
            min_num = b;
        }
        else{
            min_num = c;
        }
    }
    else if(b>c){
        max_num = b;
        if(a<c){
            min_num = a;
        }
        else{
            min_num = c;
        }
    }
    else{
        max_num = c;
        if(a<b){
            min_num = a;
        }
        else{
            min_num = b;
        }
    }

    printf("Max num = %d\n",max_num);
    printf("Min num = %d\n",min_num);

    return 0;
}