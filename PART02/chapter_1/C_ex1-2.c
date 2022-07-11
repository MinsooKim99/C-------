/* PART2 Chapter1 연습문제 2
10명의 학생 성적을 배열에 저장하고 총점과 평균을 구하는 프로그램을 작성하세요.
*/
#include <stdio.h>
#define MAX_LEN 10
int main(){
    int i, input_num, sum = 0;
    int array[MAX_LEN];

    for(i=0;i<MAX_LEN;i++){
        printf("%d: ", i+1);
        scanf("%d",&input_num);
        array[i] = input_num;
        sum+=array[i];
    }


    printf("총점: %d\n",sum);
    printf("평균: %.2lf\n",(double)sum/10);

    return 0;
}