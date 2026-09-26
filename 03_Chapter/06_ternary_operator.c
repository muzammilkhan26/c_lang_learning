#include <stdio.h>

int main(){
    /*
    if else ko use karny k liye ek short hand Method bhi hai us ko ternary operator kaha jata hai 
    */
    //syntax: condition ? expression-if-true : expression-if-false

    int a=10,b=20;
    a>b?printf("a is > b"):printf("b is > a");
    
    return 0;
}