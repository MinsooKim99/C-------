/* PART2 Chapter1 연습문제 4
길이가 9인 int형 배열을 선언한 후에 키보드로부터 숫자를 하나 입력받습니다.
입력받은 숫자의 구구단 계산 결과를 배열에 저장하고 출력하는 프로그램을 작성하세요.
*/
#include <stdio.h>
#define MAX_LEN 9
int main(){
    int array[MAX_LEN];
    int i, input_num;

    printf("수 입력: ");
    scanf("%d",&input_num);
    for(i=0;i<MAX_LEN;i++){
        array[i] = input_num * (i+1);
        printf("%d x %d = %d\n",input_num, i+1, array[i]);
    }

    return 0;
}