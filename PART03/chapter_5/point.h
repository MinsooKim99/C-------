struct point                    // 구조체 선언
{
    int x;
    int y;
};

typedef struct point POINT;         //struct point를 POINT로 재정의
extern int add(int a, int b);       //extern 생략 가능
extern int subtract(int a, int b);  // extern 생략 가능