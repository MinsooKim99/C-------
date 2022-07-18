/* PART2 Chapter1 연습문제 2
10명의 학생 성적을 배열에 저장하고 총점과 평균을 구하는 프로그램을 작성하세요.
변형 - 랜덤한 수를 생성해 배열에 저장하고 총점과 평균 구하기
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX_LEN 10
int main(){
    int i, rand_num, sum = 0;
    int array[MAX_LEN];
    srand(time(NULL)); // 랜덤시드 배정하기

    for(i=0;i<MAX_LEN;i++){
        printf("%d: ", i+1);
        rand_num = rand() % 100 + 1; // 1~100
        array[i] = rand_num;
        printf("%d\n",array[i]);
        sum+=array[i];
    }


    printf("총점: %d\n",sum);
    printf("평균: %.2lf\n",(double)sum/10);

    return 0;
}