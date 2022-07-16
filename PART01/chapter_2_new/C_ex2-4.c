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
변형 - 0 이하의 수가 입력되기 전까지 계속 입력받기
*/
#include <stdio.h>

int main(){

    int r;
    double PI = 3.14;

    while(1){
        printf("반지름을 입력하세요\n");
        scanf("%d",&r);
        if(r <= 0){
            break;
        }
        printf("원의 넓이는 %lf입니다.\n",r*r*PI);
    }
    
    
    return 0;
}