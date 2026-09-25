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


    int a = 1; int b = a;
    int v = 3*3;
    char dt = '21 dec 2020';


    // ye error de run nahi ho ga
    printf("a is %d, b is %d and c is %c", a, b, dt);


    return 0;
}