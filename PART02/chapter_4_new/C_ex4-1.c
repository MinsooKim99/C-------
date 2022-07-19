/* PART2 Chapter4 연습문제 1
정수형 배열에 10, 30, 40, 30, 20을 저장하고 포인터 변수로 배열에 접근하여 배열의 합을 구하세요.
변형 - 2차원 배열에 포인터 변수로 접근하기
*/
#include <stdio.h>
int main(){
    int array[2][3]={10,30,40,30,20,60};
    int i, j, sum = 0;
    int (*p)[3] = array;

    for(i=0;i<sizeof(array)/sizeof(array[0]);i++){
        for(j=0;j<sizeof(array[0])/sizeof(int);j++){
            sum += p[i][j];
        }
    }

    printf("sum of array = %d\n",sum);

    return 0;
}