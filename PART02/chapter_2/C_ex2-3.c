/* PART2 Chapter2 연습문제 3
9행 9열의 int형 2차원 배열 이름 array를 선언합니다.
2단부터 9단까지의 구구단 결과를 저장하는 프로그램을 작성하세요.
*/
#include <stdio.h>
#define ROW_LEN 9
#define COL_LEN 9
int main(){
    int i, j;
    int array[ROW_LEN][COL_LEN];

    for(i=0;i<ROW_LEN;i++){
        for(j=0;j<COL_LEN;j++){
            array[i][j] = (i+1)*(j+1);
        }
    }

    for(i=0;i<ROW_LEN;i++){
        printf("%d단:\t",i+1);
        for(j=0;j<COL_LEN;j++){
            printf("%d\t",array[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}