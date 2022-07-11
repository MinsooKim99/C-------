/* PART2 Chapter1 연습문제 6
다음 array1, array2, array3 세 배열에서 & 연산자와 * 연산자를 이용하여 각 배열 요소
의 주소와 값을 출력하는 프로그램을 작성하고 그 결과를 그림으로 표현하세요.
*/
#include <stdio.h>
#define MAX_LEN 5
int main(){
    char array1[MAX_LEN] = {'A','B','C','D','E'};
    int  array2[MAX_LEN] = {10, 20, 30, 40, 50};
    double array3[MAX_LEN] = {10.1,20.2,30.3,40.4,50.5};
    int i;

    //array1
    printf("array1 요소의 값: ");
    for(i=0;i<5;i++){
        printf("%c ",*(array1+i));
    }
    printf("array1 요소의 주소: ");
    for(i=0;i<5;i++){
        printf("%x ",&array1[i]);
    }
    printf("\n");

    // array2
    printf("array2 요소의 값: ");
    for(i=0;i<5;i++){
        printf("%d ",*(array2+i));
    }
    printf("array2 요소의 주소: ");
    for(i=0;i<5;i++){
        printf("%x ",&array2[i]);
    }
    printf("\n");

    // array3
    printf("array3 요소의 값: ");
    for(i=0;i<5;i++){
        printf("%lf ",*(array3+i));
    }
    printf("array3 요소의 주소: ");
    for(i=0;i<5;i++){
        printf("%x ",&array3[i]);
    }
    printf("\n");

    return 0;
}