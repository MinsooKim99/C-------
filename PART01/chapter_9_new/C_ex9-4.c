/* PART1 Chapter9 연습문제 4
다음 실행 결과와 같이 밑변과 높이를 입력받아서 사각형의 넓이를 출력하는 프로그램을 구현하세요.
이때 사각형의 넓이를 구하는 함수 getArea(int x, int y)를 구현하여 사용하세요.
함수 getArea(int x, int y)는 각각 x 값과 y 값을 입력받아서 사각형의 넓이를 구하는 함수입니다.
변형 - 정사각형 여부 확인하기
*/
#include <stdio.h>
#include <string.h>

int getArea(int, int);
int main(){
    int a, b, result;
    char is_foursquare[4] = "";

    printf("밑변 길이 : ");
    scanf("%d",&a);
    printf("높이 : ");
    scanf("%d",&b);
    if(a==b)
        strcpy(is_foursquare,"정");

    result = getArea(a,b);
    printf("%s사각형의 넓이는 %d입니다.\n",is_foursquare,result);

    return 0;
}
int getArea(int x, int y){
    return x*y;
}