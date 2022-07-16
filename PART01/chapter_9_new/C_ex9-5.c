/* PART1 Chapter9 연습문제 5
정수를 인자로 받아 제곱을 반환하는 함수 square()와 세제곱을 반환하는 함수 cube()를 작성하세요.
또한 이들을 사용하여 4제곱, 5제곱을 출력하는 함수 quartic()과 quintic()을 작성하세요.
그리고 이들 함수를 조합해서 다음과 같이 출력하는 프로그램을 작성하세요.
실행 결과
INTEGER SQUARE  CUBE    QUARTIC QUINTIC
1       1       1       1       1
2       4       8       16      32
3       9       27      81      243
변형 - 다음 결과를 파일에 저장하기
*/
#include <stdio.h>
int square(int);
int cube(int);
int quartic(int);
int quintic(int);
int main(){
    int a=1,b=2,c=3;
    FILE* stream = fopen("square.txt","w");

    printf("INTEGER\tSQUARE\tCUBE\tQUARTIC\tQUINTIC\n");
    printf("%d\t%d\t%d\t%d\t%d\n",a,square(a),cube(a),quartic(a),quintic(a));
    printf("%d\t%d\t%d\t%d\t%d\n",b,square(b),cube(b),quartic(b),quintic(b));
    printf("%d\t%d\t%d\t%d\t%d\n",c,square(c),cube(c),quartic(c),quintic(c));

    fprintf(stream,"INTEGER\tSQUARE\tCUBE\tQUARTIC\tQUINTIC\n");
    fprintf(stream,"%d\t\t%d\t\t%d\t\t%d\t\t%d\n",a,square(a),cube(a),quartic(a),quintic(a));
    fprintf(stream,"%d\t\t%d\t\t%d\t\t%d\t\t%d\n",b,square(b),cube(b),quartic(b),quintic(b));
    fprintf(stream,"%d\t\t%d\t\t%d\t\t%d\t\t%d\n",c,square(c),cube(c),quartic(c),quintic(c));

    fclose(stream);
    return 0;
    
}
int square(int x){
    return x*x;
}
int cube(int x){
    return x*x*x;
}
int quartic(int x){
    return x*x*x*x;
}
int quintic(int x){
    return x*x*x*x*x;
}