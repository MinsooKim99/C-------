/* PART3 Chapter1 연습문제 7
다음 코드를 분석해서 그 결과를 그림으로 작성하고 출력 결과를 예측하세요.
*/
#include <stdio.h>
struct node{
    int data;
    struct node* link;
};
void main(){
    struct node n1, n2, n3;

    n1.data = 10;
    n1.link = &n2;
    n2.data = 20;
    n2.link = &n1;
    n3.data = 30;
    n3.link = &n3;

    printf("%d %d %d \n",n1.data,n2.data,n3.data);
    // 10 20 30
    printf("%d %d %d \n",n2.link->data,n1.link->data,n3.link->data);
    // 10 20 30

    // return 0;
}