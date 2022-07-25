#define STU_NUM 3
typedef struct student{
    double kor;
    double eng;
    double math;
}STUDENT;
double avg(double,double,double);
char grade(double);
void GetScore(STUDENT*);