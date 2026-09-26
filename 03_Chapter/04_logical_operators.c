#include <stdio.h>

int main(){
    /*
    logical operators and, or, not hain  yani k &&(and) ||(OR) !(Not)
    ye C program main Logic provide karty hain
    jese k
    misal k tor par 

    1 = true hai or 0 = False hai

    1. AND / &&
    is main agar 2no condition True ho gi tu ye kam kary ga 
    misal k tor par 
    1 && 1 true de ga 
    1 && 0, 0 && 1, 0 && 0 ye 3no hi 0 return karen gay Q k in main se ya tu ek false hai ya 2no

    2. OR / ||
    is main agar 2no ya 2no main se koi ek bhi true hoi tu ye true return kary ga 
    or agar 2no false hoi tu false return kary ga
    misal k tor par 
    1 || 1, 1 || 0, 0 || 1, ye 3no hi 1 return karen gay Q k in ek ya 2no hi true hain
    0 || 0 par ye 0 return kary ga Q k in main 2no hi false hain
    

    3. NOT / !
    Yani agar condition True hai to ! usay False bana dega, aur agar False hai to True bana dega.
    Misal:
    !1
    Yahan 1 True hai, ! usko reverse karega:
    1 → 0
    Aur:
    !0
    0 → 1

    */


    int a; int b;
    a = 1; b = 1;
    printf("The Value or a and b is %d\n", a&&b);
    printf("The Value or a or b is %d\n", a||b);
    printf("The Value or Not(a) is %d\n", !a);


    // ye multiple condition check karny main kam aaty hain 

    if (a && b) {
        printf("Both are True \n");
    }

    // agar hamary pass ye operator na hota tu hame ye is tara karni parti

    if(a){
        if(b){
            printf("Both are True \n");
        }
    }

    return 0;
}