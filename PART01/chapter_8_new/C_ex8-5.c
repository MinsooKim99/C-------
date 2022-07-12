/* PART1 Chapter8 연습문제 5
사용자로부터 세 개의 정수를 입력받아 정수형 변수 a, b, c에 각각 할당한 후,
if else 문을 이용하여 이들 변수 중 가장 큰 값을 출력하는 프로그램을 작성하세요.
단, 같은 수를 입력받았을 때의 처리도 가능해야 합니다.
*/
#include <stdio.h>
int main(){
    int a, b, c;
    printf("input : ");
    scanf("%d",&a);
    printf("input : ");
    scanf("%d",&b);
    printf("input : ");
    scanf("%d",&c);

    if((a==b)||(a==c)){
        printf("중복값이 있습니다\n");
    }
    else if((a>b)&&(a>c)){
        printf("result : %d",a);
    }
    else{
        printf("result : %d",b>c?b:c);
    }

    return 0;
}