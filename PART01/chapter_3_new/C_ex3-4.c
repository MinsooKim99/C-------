/* PART1 Chapter3 연습문제 4
생년월일을 변수에 저장하고, 이를 출력하는 프로그램을 작성하세요.
변형 - 입력받아서 조건 확인하고 출력하기
*/
#include <stdio.h>

int main(){
    int birthYear, birthMonth, birthDate;
    // birthYear = 1999;
    // birthMonth = 6;
    // birthDate = 9;

    printf("생일 입력 시스템\n");
    while(1){
        printf("년도: ");
        scanf("%d",&birthYear);
        if(0 < birthYear && birthYear<2022){
            break;
        }
        printf("제대로 입력하세요.\n");
    }
    
    while(1){
        printf("월: ");
        scanf("%d",&birthMonth);
        if(1 <= birthMonth && birthMonth<=12){
            break;
        }
        printf("제대로 입력하세요.\n");
    }

    while(1){
        printf("일: ");
        scanf("%d",&birthDate);
        if(1 <= birthDate && birthDate <= 31){
            break;
        }
        printf("제대로 입력하세요.\n");
    }


    printf("나의 생일은 %d년 %d월 %d일 입니다. \n",birthYear,birthMonth,birthDate);

    return 0;
}