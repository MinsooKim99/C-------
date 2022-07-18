/* PART2 Chapter1 연습문제 1
그림과 같이 배열의 요소를 복사하세요.
A B C ㅁㅁㅁ
A B C C B A
변형 - A B C A B C 형태로 복사하기
*/
#include <stdio.h>
int main(){
    int i;
    char array[6]={'A','B','C'};

    for(i=0;i<3;i++){
        printf("%c ",array[i]);
    }
    printf("\n");

    for(i=0;i<3;i++){
        array[i+3] = array[i];
    }
    
    for(i=0;i<6;i++){
        printf("%c ",array[i]);
    }


    return 0;
}