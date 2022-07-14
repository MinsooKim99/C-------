/* PART3 Chapter4 연습문제 1
다음 프로그램을 실행했을 때 메모리 공간의 데이터 영역과
스택 영역에 할당되는 변수들의 값을 그림으로 표현하세요.
*/
#include <stdio.h>

char ch = 'c';
int in = 5;

void func1(int,int);
void func2(char);
int main(){
    int i = 3;
    func1(i,5);
    return 0;
}

void func1(int i, int j){
    char c='a';
    func2(c);
}

void func2(char c){
    int k = 3;
}