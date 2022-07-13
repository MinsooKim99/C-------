/* PART3 Chapter1 연습문제 9
다음 그림을 분석해서 그 결과를 코드로 작성하세요.
*/
#include <stdio.h>

struct node{
    int data;
    struct node* right_link;
    struct node* left_link;
};

int main(){
    struct node n1 = {10,NULL,NULL};
    struct node n2 = {20,NULL,NULL};
    struct node n3 = {30,NULL,NULL};
    struct node n4 = {40,NULL,NULL};
    struct node n5 = {50,NULL,NULL};
    struct node n6 = {60,NULL,NULL};
    struct node n7 = {70,NULL,NULL};

    n1.left_link = &n2;
    n1.right_link = &n3;
    n2.left_link = &n4;
    n2.right_link = &n5;
    n3.left_link = &n6;
    n3.right_link = &n7;

    printf("n1: %d\tn1.left:%d\tn1.right: %d\n",
        n1.data,n1.left_link->data,n1.right_link->data);
    printf("n1.left.left: %d\tn1.left.right: %d\n",
        n1.left_link->left_link->data,n1.left_link->right_link->data);
    printf("n1.right.left: %d\tn1.right.right: %d\n",
        n1.right_link->left_link->data,n1.right_link->right_link->data);

    return 0;
}