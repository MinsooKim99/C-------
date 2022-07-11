/* PART2 Chapter4 연습문제 1
정수형 배열에 10, 30, 40, 30, 20을 저장하고 포인터 변수로 배열에 접근하여 배열의 합을 구하세요.
*/
#include <stdio.h>
int main(){
    int array[]={10,30,40,30,20};
    int sum = 0;
    int* p = array;

    for(int i=0;i<sizeof(array)/sizeof(int);i++){
        sum += p[i];
    }

    printf("sum of array = %d\n",sum);

    return 0;
}