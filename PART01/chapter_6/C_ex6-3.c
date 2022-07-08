/* PART1 Chapter6 연습문제 3
다음 코드에서 자동 형변환과 강제 형변환으로
데이터 손실이 발생한 부분은 어느 부분인지 식별하시오.
#include <stdio.h>
int main(){
    int i;
    float f;
    double d;

    i=(long)('a'+1.3);
    f=2.49+i;
    d=(double)f*i;

    return 0;
}
*/
#include <stdio.h>
int main(){
    int i;
    float f;
    double d;

    i=(long)('a'+1.3);
    f=2.49+i;
    d=(double)f*i;

    printf("i:%d\nf:%f\nd:%lf\n",i,f,d);

    return 0;
}
/*
i: 'a'+1.3은 98.3이지만 long으로 바꾸는 과정에서 데이터 손실
f: float형의 2.49와 long형의 i와 더하면서 double형으로 자동 형변환이
이루어져 소수점6자리 이후부터 데이터 손실
d: double로 형변환된 f를 long형의 i랑 곱하면서 데이터 손실
*/