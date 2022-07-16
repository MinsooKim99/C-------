/* PART1 Chapter4 연습문제 1
다음과 같은 결과가 출력되게 문자열 상수를 사용하여 빈칸을 채우세요.
실행 결과
10 + 20 = 30
int main(){
    
    printf("%s %d \n",ㅁㅁ,10+20);
    
    return 0;
}
변형 - 형변환 사용하기
*/
#include <stdio.h>

int main(){
    
    printf("%s %.2lf \n","10.00 + 20.00 =",(double)10 + 20);
    
    return 0;
}