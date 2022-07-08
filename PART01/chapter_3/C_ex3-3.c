/* PART1 Chapter3 연습문제 3
다음 시나리오에 맞게 코드의 빈칸을 채우세요.
정민이와 현상이는 음료수를 마시고 있었습니다. 정민이는 빨간 컵에 오렌지 주스를
마시고 있었고 현상이는 파란 컵에 사이다를 마시고 있었습니다. 이때 현상이는 정민이에게
문제를 하나 제시했습니다. 빨간 컵에 주스와 파란 컵에 사이다를 가득 담은 후에 빨간 컵에
있는 주스는 파란 컵에 담고, 파란 컵에 있는 사이다는 빨간 컵으로 옮겨 담으면 음료수 값을
모두 자기가 계산하겠다고 했습니다. 정민이는 미소를 지으며 음료수 판매원에게 노란 빈 컵을
하나 달라고 했습니다. 그리고는 간단하게 문제를 풀었습니다.
자~! 정민이는 어떤 방법으로 이 문제를 해결했을까요?
void main(){
    int red = 1, blue = 2;  // 1은 오렌지 주스, 2는 사이다
    int yellow;             // 빈컵
    printf("before \n");
    printf("red = %d, blue = %d \n",red,blue);
    빨간 컵의 주스를 노란 컵에 저장
    파란 컵의 사이다를 빨간 컵에 저장
    노란 컵의 주스를 파란 컵에 저장
    
    printf("after \n");
    printf("red = %d, blue = %d \n",red,blue);
}
*/
#include <stdio.h>

void main(){
    int red = 1, blue = 2;  // 1은 오렌지 주스, 2는 사이다
    int yellow;             // 빈컵
    printf("before \n");
    printf("red = %d, blue = %d \n",red,blue);
    yellow = red;
    red = blue;
    blue = yellow;
    
    printf("after \n");
    printf("red = %d, blue = %d \n",red,blue);
}