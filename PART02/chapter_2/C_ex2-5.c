/* PART2 Chapter2 연습문제 5
int array[2][3]={1,2,3,4,5,6}을 선언하고, array[i] == *(array+i) 표준을 이용하여
2차원 배열 요소들의 주소와 값을 출력하는 프로그램을 작성하세요.
*/
#include <stdio.h>
#define ROW_LEN 3
#define COL_LEN 3
int main(){
    int i,j;
    int array[2][3]={1,2,3,4,5,6};

    printf("값: 주소\n");
     for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            printf("%d: %x ",*(*(array+i)+j),*(array+i)+j);
        }
        printf("\n");
    }
    
    return 0;
}