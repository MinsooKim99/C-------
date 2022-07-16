/* PART1 Chapter6 연습문제 4
사용자에게 ASCII코드 값을 입력받아 그 값에 해당하는 문자를
출력하는 프로그램을 만들어 보세요. 출력 결과는 다음과 같습니다.
실행 결과
input = 65
입력한 코드에 해당하는 문자는 A입니다.
변형 - 문자 입력해서 아스키코드 출력하기
*/
#include <stdio.h>
int main(){
    int input_num;
    char input_char;
    printf("input num : ");
    scanf("%d",&input_num);
    printf("입력한 코드에 해당하는 문자는 %c 입니다.\n",input_num);

    printf("input char : ");
    scanf(" %c",&input_char); // 앞서 \n을 입력으로 간주하기 때문에 %c를 한칸 띄워서 작성
    printf("입력한 문자의 아스키코드는 %d 입니다.\n",input_char);

    return 0;
}