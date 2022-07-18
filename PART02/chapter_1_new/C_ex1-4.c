/* PART2 Chapter1 연습문제 4
길이가 9인 int형 배열을 선언한 후에 키보드로부터 숫자를 하나 입력받습니다.
입력받은 숫자의 구구단 계산 결과를 배열에 저장하고 출력하는 프로그램을 작성하세요.
변형 - 동적할당 이용 몇까지 곱할지 정하기
*/
#include <stdio.h>
#include <stdlib.h>
int main(){
    int* array = NULL;
    int i, input_num_front, input_num_back;

    printf("숫자 입력: ");
    scanf("%d",&input_num_front);
    printf("몇까지 곱할지: ");
    scanf("%d",&input_num_back);

    array = (int*)malloc(input_num_back * sizeof(int));
    if(array == NULL){
        printf("ERROR\n");
        return 1;
    }
    for(i=0;i<input_num_back;i++){
        array[i] = input_num_front * (i+1);
        printf("%d x %d = %d\n",input_num_front, i+1, array[i]);
    }
    printf("사용한 메모리: %d\n",input_num_back * sizeof(int));

    free(array);
    return 0;
}