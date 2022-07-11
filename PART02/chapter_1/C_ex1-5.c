/* PART2 Chapter1 연습문제 5
다음 두 배열에서 같은 배열 요소 간에 곱하는 프로그램을 반복문을 이용하여 작성하세요.
2.2  3.5  2.5  10.1  4.0
3.3  2.0  4.0  1.0   2.5
*/
#include <stdio.h>
#define MAX_LEN 5
int main(){
    int i;
    float array1[MAX_LEN] = {2.2,3.5,2.5,10.1,4.0};
    float array2[MAX_LEN] = {3.3,2.0,4.0,1.0,2.5};
    double result;

    for(i=0;i<MAX_LEN;i++){
        result = array1[i] * array2[i];
        printf("%.2f * %.2f = %.2f\n",array1[i],array2[i],result);
    }

    return 0;
}