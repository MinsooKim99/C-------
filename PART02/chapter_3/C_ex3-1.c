/* PART2 Chapter3 연습문제 1
다음 코드를 분석해서 그 결과를 그림으로 나타내세요.
*/
#include <stdio.h>
int main(){
    char c = 'B';
    int num = 10;
    char* cp = NULL;
    int* ip = NULL;

    cp = &c;    // cp는 c의 주소
    ip = &num;  // ip는 num의 주소
    *cp = 'A';  // cp의 주소를 'A'의 주소로 변경
    *ip = 20;   // ip의 주소를 20 의 주소로 변경

    printf("%x %d \n",&num, num);   // num = 20
    printf("%x %d \n",ip, *ip);     // ip의 주소가 num의 주소랑 동일

    printf("%x %c \n",&c,c);        // c = 'A'
    printf("%x %c \n",cp,*cp);      // cp의 주소가 c의 주소랑 동일
    
    return 0;
}