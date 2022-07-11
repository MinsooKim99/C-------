/* PART1 Chapter7 연습문제 4
반복문을 이용해서 키보드로부터 입력받은 값을
구구단으로 출력해 주는 프로그램을 작성하세요.
*/
#include <stdio.h>
int main(){
    int n, i=0;

    printf("정수를 입력하세요: ");
    scanf("%d",&n);

    for(;i<10;i++){
        printf("%d * %d = %d입니다\n",n,i,n*i);    
    }

    return 0;
}