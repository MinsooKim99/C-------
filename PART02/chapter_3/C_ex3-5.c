/* PART2 Chapter3 연습문제 5
다음 그림을 보고 1단계에서 2단계까지를 나타내는 프로그램을 작성하세요.
*/
#include <stdio.h>
int main(){
    int array[3] = {10,20,30};
    int* ip = NULL;
    int** ipp = NULL;

    ip = array;
    ipp = &ip;

    printf("%d %d %d\n",array[0],array[1],array[2]);
    printf("%d %d %d\n",*ip,*(ip+1),*(ip+2));
    printf("%d %d %d\n",*(*ipp),*(*ipp+1),*(*ipp+2));

    
    return 0;
}