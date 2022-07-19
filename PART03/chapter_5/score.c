double avg(double a, double b, double c){
    return (a+b+c)/3;
}
char grade(double score){
    if(score>=90){
        return 'A';
    }
    else if(score>=80){
        return 'B';
    }
    else{
        return 'F';
    }
}