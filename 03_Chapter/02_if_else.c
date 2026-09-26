#include <stdio.h>

int main(){

    /* 
    ham if k sath else bhi use kar sakty hain
    ye is tara kam karta hai

    if(Condition){
        statment 1;
    }else {
        statment 2;
    }

    agar condition true ho gai tu statment 1 run ho jae gi or statment 2 skip ho jae gi 
    or agar condition false ho gai tu statment 1 skip ho jae gi or statment 2 run ho jae gi
    */
    int a = 5;

    if(a>10){
        printf("We are insite if \n");
        printf("Your age Greater then 10\n");
    } else {
        printf("We are insite else \n");
        printf("Your age Not Greater then 10\n");
    }
    return 0;
}