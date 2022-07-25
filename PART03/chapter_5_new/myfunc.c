void* add(int a, int b){
    static int result;
    result = a + b;
    return &result;
}
void* sub(int a, int b){
    static int result;
    result = a - b;
    return &result;
}
void* mul(int a, int b){
    static int result;
    result = a * b;
    return &result;
}
void* div(int a, int b){
    static double result;
    result = (double)a / b;
    return &result;
}