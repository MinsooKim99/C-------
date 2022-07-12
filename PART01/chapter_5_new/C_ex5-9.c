/* PART1 Chapter5 연습문제 9
1파운드는 0.45kg입니다. 밀가루 150파운드는 몇kg인지
계산하는 프로그램을 작성하세요.
*/
#include <stdio.h>
#define PND 0.45

int main(){
    int flour = 150;

    printf("%d파운드는 %.2lfkg입니다.\n",flour,flour*PND);

    return 0;
}