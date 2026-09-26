#include <stdio.h>

int main(){
    // C Lang main ek Non Zero value True hoti hai
    // matlab k agar condition main koi bhi value hai or wo Zero (0) nahi hai tu wo tu wo condition true ho jae gi or run ho jae gi

    if(1){
        printf("This Print will work! & it is 1 \n");
    }
    if(55){
        printf("This Print will work! & it is 55 \n");
    }
    if(132654654){
        printf("This Print will work! & it is 132654654 \n");
    }
    if(10.56){
        printf("This Print will work! & it is 10.56 \n");
    }
    if('c'){
        printf("This Print will work! & it is c \n");
    }
    if(0){
        printf("This Print will not work! & it is 0 \n");
    }
    return 0;
}