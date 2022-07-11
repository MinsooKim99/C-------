/* PART2 Chapter5 연습문제 3
다음 그림과 같이 크기가 8인 배열에 있는 값을 한 칸씩 옆으로 이동시키고
맨 마지막 칸에 있는 값을 배열의 첫번째 주소로 이동시키는 프로그램을 작성하세요.
1   2   3   4   5   6   7   8
8   1   2   3   4   5   6   7
*/
#include <stdio.h>
void func(int*,int (*)[2]);
int main(){
    int array1[8] = {1,2,3,4,5,6,7,8};
    int array2[8];
    int i;
    const int LEN = sizeof(array1)/sizeof(int);

    array2[0] = array1[LEN-1];
    for(i=1;i<LEN;i++){
        array2[i] = array1[i]-1;
    }

    for(i=0;i<LEN;i++){
        printf("%d ",array1[i]);
    }
    printf("\n");

    for(i=0;i<LEN;i++){
        printf("%d ",array2[i]);
    }

    return 0;
}