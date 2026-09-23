#include <stdio.h>

int main() {
    /*
    C k andar main user se input bhi le sakty hain us k liye hum scanf() function ka use karte hain.
    scanf() function ka syntax kuch is tarah hota hai:
    scanf("format_specifier", &variable_name);
    nichy diya gya code user se input lene ka example hai:
    */
    int num;
    scanf("%d", &num);
    printf("You entered: %d\n", num);
    return 0;
}