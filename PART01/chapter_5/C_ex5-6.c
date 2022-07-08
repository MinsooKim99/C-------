/* PART1 Chapter5 연습문제 6
다음 내용의 답을 출력하도록 프로그램을 작성하세요.
인간의 수명이 100년이라고 가정하고, 담배 한 개피를 피우면 수명이 2분 단축된다고 합시다.
어떤 사람이 성인이 된 후부터 담배를 20년간 피웠다면 수명은 얼마나 단축되었고,
몇 살까지 살 수 있습니까?
*/
#include <stdio.h>
#define DAY 365
#define MONTH 12
#define HOUR 24
#define MINUTE 60
#define DMG_MINUTE 2

int main(){
    const int YEAR_CIGAR = 20;
    const int LIFE = 100;
    int LIFE_DMG_MINUTE = DMG_MINUTE * DAY * YEAR_CIGAR;
    double LIFE_DMG_YEAR = LIFE_DMG_MINUTE / MINUTE / HOUR;

    printf("단축된 수명: %.2lf년\n",LIFE_DMG_YEAR);
    printf("당신은 %.2lf살까지 살 수 있습니다.\n",LIFE - LIFE_DMG_YEAR);


    return 0;
}