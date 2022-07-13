/* PART1 Chapter5 연습문제 9
1파운드는 0.45kg입니다. 밀가루 150파운드는 몇kg인지
계산하는 프로그램을 작성하세요.
변형 - 80kg을 파운드로 변형하기
*/
#include <stdio.h>
#define PND 0.45

int main(){
    int flour = 150; // 150파운드
    int weight = 80; // 80kg

    printf("%d파운드는 %.2lfkg 입니다.\n",flour,flour*PND);
    printf("%dkg은 %.2lf파운드 입니다.\n",weight,weight/PND);

    return 0;
}