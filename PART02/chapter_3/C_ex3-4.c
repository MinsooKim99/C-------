/* PART2 Chapter3 연습문제 4
다음 그림을 보고 1단계에서 4단계까지를 나타내는 프로그램을 작성하세요.
단, 2단계에서는 ip1을 이용하여 num1의 값에 접근, 3단계에서는 ip2를 이용하여
num1의 값에 접근, 4단계에서는 ip3를 이용하여 num1의 값에 접근하는 코드를 작성하세요.
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

    printf("%d %d %d %d\n",num1,*ip1,**ip2,***ip3);

    *ip1 = 20;
    printf("%d %d %d %d\n",num1,*ip1,**ip2,***ip3);

    **ip2 = 30;
    printf("%d %d %d %d\n",num1,*ip1,**ip2,***ip3);
    
    ***ip3 = 40;
    printf("%d %d %d %d\n",num1,*ip1,**ip2,***ip3);
    
    return 0;
}