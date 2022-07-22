/* PART3 Chapter3 연습문제 4
다음은 파일의 내용입니다. 파일의 내용을 읽어서 각 학생들의 총점을
새로운 파일에 출력하는 프로그램을 작성하세요.
1. 박지성 90.2 90.1 88.8 
2. 이청용 89.1 88.5 90.2 
3. 박주영 92.1 87.1 90.1 
4. 기성용 85.3 86.2 95.1 
5. 구자철 88.2 86.3 91.1 
6. 지소연 98.2 90.1 93.5 
7. 전가을 93.3 95.5 91.2 
*/
#include <stdio.h>

int main(){
    FILE* stream1 = fopen("score.txt","r");
    FILE* stream2 = fopen("score_total.txt","w");
    int i, ret, num;
    char name[20];
    double score_1, score_2, score_3, total;

    for(i=0;;i++){
        ret = fscanf(stream1,"%d %*c %s %lf %lf %lf",&num,name,&score_1,
            &score_2,&score_3);
        if(ret == -1)
            break;
        // printf("%d\n",ret);
        // printf("%d %s %lf %lf %lf\n",num,name,score_1,score_2,score_3);
        total = score_1 + score_2 + score_3;
        fprintf(stream2,"%d. %s 총점: %.2lf\n",num,name,total);
    }

    fclose(stream1);
    fclose(stream2);

    return 0;
}