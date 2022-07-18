/* PART2 Chapter1 연습문제 3
다음 표에서 가로 합과 세로 합, 모든 수의 합을 구하는 프로그램을 작성하세요.
90  78  77  98  98
80  45  67  88  57
88  99  65  55  74
변형 - 행과 열 입력받아서 해당 위치의 수 5번까지 더하기
*/
#include <stdio.h>
#define MAX_ROW 3
#define MAX_COL 5
int main(){
    int i, j, input_row, input_col;
    int array_sum = 0;
    int array[MAX_ROW][MAX_COL] = {90,78,77,98,98,80,45,67,88,57,88,99,65,55,74};
    for(i=0;i<MAX_ROW;i++){
        for(j=0;j<MAX_COL;j++){
            printf("%d ",array[i][j]);
        }
        printf("\n");
    }

    printf("array의 범위를 벗어나면 입력이 종료됩니다.\n");
    for(i=0;i<5;i++){
        printf("row: ");
        scanf("%d",&input_row);
        printf("col: ");
        scanf("%d",&input_col);

        if(((input_row < 0) || (input_row >= MAX_ROW)) || ((input_col < 0) || (input_col >= MAX_COL))){
            printf("Out of index.\n");
            break;
        }
        else{
            array_sum += array[input_row][input_col];
            printf("sum = %d\n",array_sum);
        }
    }

    printf("최종 합: %d\n",array_sum);

    return 0;
}