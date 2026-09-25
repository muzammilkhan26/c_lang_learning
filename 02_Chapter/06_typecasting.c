#include <stdio.h>

int main(){
    /*
    Typecasting:
    yani kisi bhi Variable ka data type change karna
    */

    int a = 2;
    float m = 10.0;
    a = (int) m; // convert float into int
    printf("%d", a);  
    return 0;
}