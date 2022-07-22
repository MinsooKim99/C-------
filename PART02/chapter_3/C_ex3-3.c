/* PART2 Chapter3 연습문제 3
다음 그림을 보고 1단계에서 2단계까지를 나타내는 프로그램을 작성하세요.
*/
#include <stdio.h>
int main(){
    int num1 = 10;
    int* ip1 = NULL;
    int** ip2 = NULL;
    int*** ip3 = NULL;

    ip1 = &num1;
    ip2 = &ip1;
    ip3 = &ip2;

    printf("%d %d %d %d",num1,*ip1,**ip2,***ip3);
    printf("%x %x %x %x",&num1,&ip1,&ip2,&ip3);
    
    return 0;
}