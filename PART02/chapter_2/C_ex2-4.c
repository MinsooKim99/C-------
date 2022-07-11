/* PART2 Chapter2 연습문제 4
4행 3열의 2차원 배열 두 개에서 같은 배열 요소의 행과 열 간에 합과 차를 구하세요.
즉, 행렬의 합과 차를 구하는 프로그램을 작성하세요.
23  75  85      11  15  47
12  77  51      74  85  69
25  66  30      57  86  28
19  90  88      90  22  33
*/
#include <stdio.h>
#define ROW_LEN 4
#define COL_LEN 3
int main(){
    int i, j;
    int array1[ROW_LEN][COL_LEN] = {{23,75,85},{12,77,51},{25,66,30},{19,90,88}};
    int array2[ROW_LEN][COL_LEN] = {{11,15,47},{74,85,69},{57,86,28},{90,22,33}};
    int array_add[ROW_LEN][COL_LEN];
    int array_sub[ROW_LEN][COL_LEN];
    
    for(i=0;i<ROW_LEN;i++){
        for(j=0;j<COL_LEN;j++){
            array_add[i][j] = array1[i][j] + array2[i][j];
            array_sub[i][j] = array1[i][j] - array2[i][j];
        }
    }

    printf("array1과 array2의 합\n");
    for(i=0;i<ROW_LEN;i++){
        for(j=0;j<COL_LEN;j++){
            printf("%d\t",array_add[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    printf("array1과 array2의 차\n");
    for(i=0;i<ROW_LEN;i++){
        for(j=0;j<COL_LEN;j++){
            printf("%d\t",array_sub[i][j]);
        }
    printf("\n");
    }

    return 0;
}