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

    /*
    %f ki jaga %d lagae gay tu ans galat ae ga
    */

    /*
    Q3: 3. Write a program to check whether a number is divisible by 97 or not.
    */
    int d = 4546577;
    printf("\n The ans is %d", d%97);

    /*
    Q4: Explain step by step evaluation of 3*x/y-z+k , where x = 2 , y = 3 , z = 3 , k = 1 .
    
    */
    return 0;
}