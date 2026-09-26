#include <stdio.h>

int main(){
    /*
    1. What will be the output of this program?
    int a = 10;
    if (a = 11)
        printf("I am 11");
    else
        printf("I am not 11");
    */
    int a = 10;
    if (a = 11){
        printf("I am 11");
    }
    else {
        printf("I am not 11");
    }

    /*
    is ka ans ho ga 
    I am 11 
    Q k condition main jo = laga hai wo assignment ka hai tu wo a ki condition check nahi kar raha bal k a ko 11 assign kar raha hai
    */
    return 0;
}