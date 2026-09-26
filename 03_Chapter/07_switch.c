#include <stdio.h>

int main() {
    /*
    Switch k ander agar ek bhi value match ho gi tu us k bad k sary k sary statments run ho jaen gay
    agar ham chahty hain k agar 1st condition k true hony par sirf 1st statment hi chaly tu us k liye ham use karty hain break stetment ka
    */
    int a;
    printf("Enter a 1 Number: ");
    scanf("%d",&a);
    switch(a){
        case 1:
            printf("User Enter 1\n ");
            break;
        case 2:
            printf("User Enter 2\n ");
            break;
        case 3:
            printf("User Enter 3\n ");
            break;
        case 4:
            printf("User Enter 4\n ");
            break;
        default:
            printf("Nothing Matched");
    }

    return 0;
}