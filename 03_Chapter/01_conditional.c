#include <stdio.h>

int main(){
    /*
    Conditional Instructions:
    yani function ko kisi Conditional k zariye chala 
    matlab k agar ap k Variable ki Value 7 hai tu aap ye keh sakty ho k agar kisi ki age 7 se choti hai tu ye display karo
    
    Conditional Instructions 2 tara ki hoti hai 
    1: if-else Conditional
    2: switch Conditional

    if-else wala ye sab se ziyada use kiya jata hai

    ye program is tara hota hai
    if(Condition){
        statment
    }

    ye tab hi run ho ga k agar jab condition true ho gi agar condition true nahi ho gi tu ye program skip ho jae ga


    relational opreater:
    > < == !=
    >: greaterthen
    <: lessthen
    ==: equal to
    !=: not equal to

    C lang main single = tu assign karny k liye hota hai jab k == Compare karny k liye

    

    */

    int a = 15;

    if(a>10){
        printf("We are insite if \n");
        printf("Your age Greater then 10\n");
    }
    // ham chahen tu ek or if condition laga sakty hain
    if(a%5==0){
        printf("We are insite another if \n");
        printf("a is divisabel by 5");
    }
    
    return 0;
}