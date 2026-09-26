#include <stdio.h>

int main(){
    int year;

    printf("Enter Year: ");
    scanf("%d", &year);

    if (year %4 == 0 || (year %4 == 0 && year %100 != 0)){
        printf("This is a Leap Year");
    }
    else {
        printf("This is Not a Leap Year");
    }
    return 0;
}