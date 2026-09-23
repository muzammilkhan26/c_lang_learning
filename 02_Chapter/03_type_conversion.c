#include <stdio.h>

int main(){
    // An Arithmetic operation between
    // int and int → int
    // int and float → float
    // float and float → float

    // int and float
    float a = 9.0;
    int b = 2;
    float c = a/b;
    printf("the Value of a/b is %f\n", c);
    
    // int and int
    int d = 9;
    int e = 3;
    int f = d/e;
    printf("the Value of d/e is %d\n", f);
    
    // float and float
    float g = 9.0;
    float h = 2.0;
    float i = g/h;
    printf("the Value of g/h is %f\n", i);


    // agar int main float value dal di tu . k bad ki value ki koi value nahi ho gi matlab 6.7 main sirf 6 print ho ga

    int j = 6.7;
    printf("The value of j is %d", j);
    return 0;
}