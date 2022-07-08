/* PART1 Chapter4 연습문제 2
다음과 같은 결과가 출력되게 심볼릭 상수를 사용하여 프로그램을 작성하세요.
실행 결과
올해는 2010년입니다.
내 나이는 20살입니다.
나는 1990년에태어나 20번째 해가 되었습니다.
내 동생의 나이는 18살입니다.
내 동생은 1992년에 태어나 18번째 해가 되었습니다.
*/
#include <stdio.h>

int main(){
    const int YEAR_NOW = 2010, YEAR_BIRTH_MY = 1990, AGE_MY = 20;
    #define YEAR_BIRTH_BRO 1992
    #define AGE_BRO 18

    printf("올해는 %d년입니다. \n",YEAR_NOW);
    printf("내 나이는 %d살입니다. \n",AGE_MY);
    printf("나는 %d년에 태어나 %d번째 해가 되었습니다. \n",YEAR_BIRTH_MY,AGE_MY);
    printf("동생의 나이는 %d살입니다. \n",AGE_BRO);
    printf("동생은 %d년에 태어나 %d번째 해가 되었습니다.\n",YEAR_BIRTH_BRO, AGE_BRO);

    return 0;
}