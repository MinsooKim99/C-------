/* PART1 Chapter8 연습문제 2
세 자리 십진수를 입력받아서 각 자리의 숫자들이 각각 짝수인지 홀수인지를
구분하여 출력하는 프로그램을 작성하세요. 예를 들어 456을 입력하면
"4:짝수 5:홀수 6:짝수"가 출력됩니다.
변형 - 삼항연산자가 아닌 if문 사용하기
*/
#include <stdio.h>
int main(){
    int num, units, tens, hundreds;
    printf("3자리 십진수를 입력하세요 : ");
    scanf("%d",&num);

    hundreds = num / 100;
    tens = (num/10)%10;
    units = num%10;

    // printf("%d : %s ",hundreds,hundreds%2==1?"홀수":"짝수");
    // printf("%d : %s ",tens,tens%2==1?"홀수":"짝수");
    // printf("%d : %s \n",units,units%2==1?"홀수":"짝수");

    if(hundreds%2 == 1){
        printf("%d : 홀수 ",hundreds);
    }
    else{
        printf("%d : 짝수 ",hundreds);
    }

    if(tens%2 == 1){
        printf("%d : 홀수 ",tens);
    }
    else{
        printf("%d : 짝수 ",tens);
    }

    if(units%2 == 1){
        printf("%d : 홀수 \n",units);
    }
    else{
        printf("%d : 짝수 \n",units);
    }
    
    return 0;
}