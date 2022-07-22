/* PART3 Chapter2 연습문제 3
다음 코드를 실행하면 의도했던 대로 동작하지 않습니다. 그 이유는 무엇입니까?
올바르게 동작하도록 코드를 수정해 보세요.
#include <stdio.h>
#include <string.h>
int main(){
    char a[] = "문자열";
    char b[] = "문자열";

    if(a==b)
        puts("a와 b가 같습니다.");
    else
        puts("a와 b가 같지 않습니다.");

        return 0;
}
*/
#include <stdio.h>
#include <string.h>
int main(){
    char a[] = "문자열";
    char b[] = "문자열";

    if(strcmp(a,b) == 0)            // 문자열에서 변수명은 주소이기 때문에 ==로 비교할 수 없다.
        puts("a와 b가 같습니다.");   // strcmp(a,b) 반환값 0: 같다 양수: a>b 음수: a<b
    else
        puts("a와 b가 같지 않습니다.");

        return 0;
}