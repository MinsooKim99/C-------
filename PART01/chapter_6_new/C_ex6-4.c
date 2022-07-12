/* PART1 Chapter6 연습문제 4
사용자에게 ASCII코드 값을 입력받아 그 값에 해당하는 문자를
출력하는 프로그램을 만들어 보세요. 출력 결과는 다음과 같습니다.
실행 결과
input = 65
입력한 코드에 해당하는 문자는 A입니다.
*/
#include <stdio.h>
int main(){
    int input_num;
    printf("input : ");
    scanf("%d",&input_num);

    printf("입력한 코드에 해당하는 문자는 %c 입니다.\n",input_num);

    return 0;
}