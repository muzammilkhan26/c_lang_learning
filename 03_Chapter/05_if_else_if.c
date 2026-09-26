#include <stdio.h>

int main(){
    /*
    if else if main agar koi bhi condition true ho gai tu baki sab skip ho jaty hain
    jese k agar if condition true ho gai tu nichy k baki sab else if waghaira sab skip ho jae gay
    is hi tara koi else if ki condition true ho gai tu baki sab skip ho jaen gay 
    or agar koi condition true na hoi tu else true ho jae ga or wo statment print ho jae gi

    Important Notes: 
    1. if else-if else ladder main se koi ek hi condition true ho k run ho gi
    2. agar koi condition true hai or nichy k baki sary bhi true hain tu 1st wali run ho jae gi or nichy k baki sab skip ho jae gay
    */
    int age = 45;
    if(age>60){
        printf("You can drive & You are a senoir citizen.");
    }
    else if(age > 40){
        printf("You Can drive & You are a elder.");
    }
    else if(age > 18){
        printf("You Can drive. ");
    }
    else{
        printf("You Can not drive. ");
    }

    return 0;
}