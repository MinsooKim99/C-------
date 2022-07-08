/* PART1 Chapter5 연습문제 7
사용자로부터 0000과 1111 사이의 2진수를 입력받아
10진수로 출력하는 프로그램을 작성하세요.
*/
#include <stdio.h>

int main(){
    int n3,n2,n1,n0;
    int input_num;
    int binary_to_int;

    printf("0000~1111 사이의 이진수 입력: ");
    scanf("%d",&input_num);

    n0 = input_num % 10;
    n1 = (input_num / 10)%10;
    n2 = (input_num / 100)%10;
    n3 = (input_num / 100)/10;

    binary_to_int = (n3*8)+(n2*4)+(n1*2)+(n0*1);
    printf("10진수 정수: %d",binary_to_int);



    return 0;
}