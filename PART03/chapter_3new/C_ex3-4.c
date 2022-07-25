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
변형 - 학생 총점 파일에 출력하고 크기를 출력한 다음 번호로 검색하는 프로그램 작성하기
*/
#include <stdio.h>
void SetFile();
void Search();
int main(){
    SetFile();
    Search();

    return 0;
}
void SetFile(){
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
        total = score_1 + score_2 + score_3;
        fprintf(stream2,"%d. %s 총점: %.2lf\n",num,name,total);
    }
    printf("파일 출력 완료...\n");
    fseek(stream1,  0, SEEK_END);
    fprintf(stdout, "score size : %d byte \n", ftell(stream1));

    fclose(stream1);
    fclose(stream2);
}
void Search(){
    FILE* stream = fopen("score_total.txt","r");
    int i, j, ret, num, input_num = -1;
    char name[20];
    double total;
    
    while(1){
        fseek(stream,0,SEEK_SET);
        printf("번호 검색(0:exit): ");
        scanf("%d",&input_num);

        if(input_num == 0){
            printf("END\n");
            break;
        }

        for(i=0;;i++){
            ret = fscanf(stream,"%d %*c %s %*s %lf",&num,name,&total);
            if(ret == -1){
                printf("목록에 없습니다.\n");
                break;
            }
            else if(num == input_num){
                printf("%d. %s 총점: %.2lf\n",num,name,total);
                break;
            }
            else
                continue;
        }
    }
    fclose(stream);
}