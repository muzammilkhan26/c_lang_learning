#include <stdio.h>

int main(){
    /*
    Q1: Which of the following is invalid in C?
    a. int a = 1; int b = a;
    b. int v = 3*3;
    c. char dt = '21 dec 2020';

    Ans:
    D
    Q k char main ek waqt main ek hi character aata hai
    */

    /*
    Q2: 2. What data type will 3.0/8 − 2 return?

    Ans:
    Float
    */

    float a = 3.0;
    int b = 8;
    int c = 2;
    
    printf("%f", a/b-c);
    return 0;
}