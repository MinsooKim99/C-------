/* PART2 Chapter5 연습문제 3
다음 그림과 같이 크기가 8인 배열에 있는 값을 한 칸씩 옆으로 이동시키고
맨 마지막 칸에 있는 값을 배열의 첫번째 주소로 이동시키는 프로그램을 작성하세요.
1   2   3   4   5   6   7   8
8   1   2   3   4   5   6   7
변형 - 1이 좌우로 이동하는 프로그램 작성하기
*/
#include <stdio.h>
#include <string.h>
void func(int*,int (*)[2]);
int main(){
    int array1[8] = {1,0,0,0,0,0,0,0};
    int array2[8];
    int i, input_num;
    const int LEN = sizeof(array1)/sizeof(int);

    for(i=0;i<LEN;i++){
        printf("%d ",array1[i]);
    }
    printf("\n");

    while(1){
        printf("press 1 to left 2 to right...\t");
        scanf("%d",&input_num);

        if(input_num == 1){        // 좌로 이동
            array2[LEN-1] = array1[0];
            for(i=LEN-1;i>=0;i--){
                array2[i-1] = array1[i];
            }
            // array1 = array2; 웨않뒈??
            memcpy(array1,array2,sizeof(int)*LEN);

            for(i=0;i<LEN;i++){
                printf("%d ",array2[i]);
            }
            printf("\n\n");
        }
        else if(input_num == 2){    // 우로 이동
            array2[0] = array1[LEN-1];
            for(i=1;i<LEN;i++){
                array2[i] = array1[i-1];
            }
            // array1 = array2; 웨않뒈??
            memcpy(array1,array2,sizeof(int)*LEN);

            for(i=0;i<LEN;i++){
                printf("%d ",array2[i]);
            }
            printf("\n\n");
        }
        else{
            for(i=0;i<LEN;i++){
                printf("%d ",array2[i]);
            }
            printf("\n");
            printf("FINISH\n");
            break;
        }
    }

    return 0;
}