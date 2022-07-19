/* PART2 Chapter5 연습문제 1
다음과 같이 실행 결과가 출력되었습니다. 결과를 보고 코드의 (//) 부분을 완성하세요.
실행 결과
A ABCD 10 3.14
변형 - 주소를 넘겨서 값 변경하기
*/
#include <stdio.h>
// 1 함수의 선언부
void func(char*,char**,int*,double*);
int main(){
    char c='A';
    char* str = "ABCD";
    int num1 = 10;
    double num2 = 3.14;

    func(&c,&str,&num1,&num2);
    printf("%c %s %d %.2lf\n",c,str,num1,num2);

    return 0;
}
// 2 함수의 정의부
void func(char* cp,char** sp,int* np1,double* np2){
    char* str2 = "DEFG";

    *cp = 'B';
    *sp = str2;
    *np1 = 20;
    *np2 = 21.98;
}