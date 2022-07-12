/* PART1 Chapter6 연습문제 1
다음 코드를 실행하면 원하는 결과가 출력되지 않습니다.
잘못된 부분을 수정하세요.
#include <stdio.h>
int main(){
    int num;
    printf("실수를 입력하세요 : ");
    scanf("%d",&num);

    printf("당신이 입력한 수는 %d입니다.",num);

    return 0;
}
실행결과
실수를 입력하세요 : 34.34
당신이 입력한 수는 34입니다.
*/
#include <stdio.h>
int main(){
    double num;
    printf("실수를 입력하세요 : ");
    scanf("%lf",&num);

    printf("당신이 입력한 수는 %lf입니다.",num);

    return 0;
}