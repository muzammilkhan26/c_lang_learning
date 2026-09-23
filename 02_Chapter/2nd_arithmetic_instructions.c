#include <stdio.h>

int main(){
    // Arithmetic Instructions kiya hai 
    // ye wo aprators jo k mathametically work kar saken or wo ye hain + - * / %
    // ab x + y = z main x or y Operands hain or + or = Operator hain or z result hai
    // Operands int or float 2no ho sakty hain
    int a = 6;
    int b = 3;
    int c = a + b;
    printf("the Value of a is %d and the value of b is %d and the sum of a & b is %d\n", a, b, c); 

    // % is a Modules Operator used to get remainder 
    printf("The Remainder when a is divided by b is %d \n", a%b );
    return 0;
}