/* PART1 Chapter2 연습문제 4
원의 반지름을 입력받아서 넓이를 계산하는 프로그램을 작성하려 합니다.
다음 코드에서 빈칸을 채우세요.
#include <stdio.h>

int main(){

    int r;
    double PI = 3.14;

    printf("반지름을 입력하세요\n");
    ㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁ

    printf("원의 넓이는 %lf입니다.",r*r*PI);
    
    
    return 0;
}
*/
#include <stdio.h>

int main(){

    int r;
    double PI = 3.14;

    printf("반지름을 입력하세요\n");
    scanf("%d",&r);

    printf("원의 넓이는 %lf입니다.",r*r*PI);
    
    
    return 0;
}