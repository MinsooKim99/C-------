/* PART2 Chapter2 연습문제 4
4행 3열의 2차원 배열 두 개에서 같은 배열 요소의 행과 열 간에 합과 차를 구하세요.
즉, 행렬의 합과 차를 구하는 프로그램을 작성하세요.
23  75  85      11  15  47
12  77  51      74  85  69
25  66  30      57  86  28
19  90  88      90  22  33
변형 - 행과 열 각각 입력 후 해당 위치의 요소 계산하기
*/
#include <stdio.h>
#define ROW_LEN 4
#define COL_LEN 3
int main(){
    int i, j, result, sign;
    int input_row_arr1, input_col_arr1, input_row_arr2, input_col_arr2;
    int array1[ROW_LEN][COL_LEN] = {{23,75,85},{12,77,51},{25,66,30},{19,90,88}};
    int array2[ROW_LEN][COL_LEN] = {{11,15,47},{74,85,69},{57,86,28},{90,22,33}};

    // arr1 출력
    printf("arr1 \n");
    for(i=0;i<ROW_LEN;i++){
        for(j=0;j<COL_LEN;j++){
            printf("%d ",array1[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    // arr2 출력
    printf("arr2 \n");
    for(i=0;i<ROW_LEN;i++){
        for(j=0;j<COL_LEN;j++){
            printf("%d ",array2[i][j]);
        }
        printf("\n");
    }

    while(1){
        printf("인덱스를 벗어날 시 프로그램이 종료됩니다.\n");
        printf("arr1 row: ");
        scanf("%d",&input_row_arr1);
        printf("arr1 col: ");
        scanf("%d",&input_col_arr1);
        printf("arr2 row: ");
        scanf("%d",&input_row_arr2);
        printf("arr2 col: ");
        scanf("%d",&input_col_arr2);

        if((input_row_arr1<0 || input_row_arr1>=ROW_LEN) ||
            (input_col_arr1<0 || input_col_arr1>=COL_LEN) ||
                (input_row_arr2<0 || input_row_arr2>=ROW_LEN) ||
                    (input_col_arr2<0 || input_col_arr2>=COL_LEN)){
            printf("Out of index: 프로그램을 종료합니다.");
            return 1;
        }
        else{
            while(1){
                printf("sign(1: + 2: -): ");
                scanf(" %d",&sign);
                if(sign == 1){
                    result = array1[input_row_arr1][input_col_arr1] + array2[input_row_arr2][input_col_arr2];
                    break;
                }
                else if(sign == 2){
                    result = array1[input_row_arr1][input_col_arr1] - array2[input_row_arr2][input_col_arr2];
                    break;
                }
                else{
                    printf("잘못된 입력입니다.\n");
                    continue;
                }
            }
            printf("result = %d\n",result);
        }
    }
    return 0;
}