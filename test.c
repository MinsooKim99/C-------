#include <stdio.h>
#define ADD(a,b) #a "+" #b
int main(){

    printf("%s",ADD(1,2));
    return 0;
}