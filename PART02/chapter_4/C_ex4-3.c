/* PART2 Chapter4 연습문제 3
다음 포인터 배열과 관련된 코드를 분석해서 그 결과를 그림으로 작성하세요.
*/
#include <stdio.h>
int main(){
    int a=10, b=20;
    int* array[2] = {&a,&b};

    printf("%x %x \n",&a,&b);               // a와 b의 주소
    printf("%x %x \n",array[0],array[1]);   // array[0](a의 주소), array[1](b의 주소)
    
    printf("%d %d \n",*&a,*&b);             // a와 b의 주소의 값(a와 b의 값)
    printf("%d %d \n",*array[0],*array[1]); // array[0]의 값(a의 값), array[1]의 값(b의 값)


    return 0;
}