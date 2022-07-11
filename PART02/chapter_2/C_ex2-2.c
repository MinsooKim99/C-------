/* PART2 Chapter2 연습문제 2
중심가에 위치한 3층짜리 열혈아파트는 각 측마다 세 세대가 있습니다.
각 세대의 가족수를 사용자로부터 입력받아 열혈아파트를 전체 주민의 수를 구하세요.
*/
#include <stdio.h>
#define ROW_LEN 3
#define COL_LEN 3
int main(){
    int i, j, input_num, sum = 0;
    int YHapart[ROW_LEN][COL_LEN];

    for(i=ROW_LEN-1;i>=0;i--){
        for(j=0;j<COL_LEN;j++){
            printf("%d층 %d호: ",ROW_LEN-i,j+1);
            scanf("%d",&input_num);
            // printf("\n");

            YHapart[i][j] = input_num;
        }
        // printf("\n");
    }

    for(i=0;i<ROW_LEN;i++){
        for(j=0;j<COL_LEN;j++){
            printf("%d ",YHapart[i][j]);
            sum += YHapart[i][j];
        }
        printf("\n");
    }

    printf("열혈아파트 전체 주민의 수는 %d명입니다.\n",sum);
    
    return 0;
}