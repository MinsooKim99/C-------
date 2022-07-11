/* PART2 Chapter4 연습문제 6
다음 프로그램의 에러 발생 원인이 무엇인지를 분석하세요.
*/
#include <stdio.h>
int main(){
    char* array1 = "ABCD";
    char array2[] = "ABCD";

    // array1[0] = 'X'; // error
    // 포인터배열이기 때문에 주소가 아닌 값을 변경할 수 없다.
    array2[0] = 'X';

    printf("%s\n%s\n",array1,array2);

    return 0;
}