#include <stdio.h>

int main(){
    /*
    Calculate income tax paid by an employee to the government as per the slabs
    mentioned below:
    Income Slab Tax
    2.5 - 5.0L 5%
    5.0L - 10.0L 20%
    Above 10.0L 30%
    Note that there is no tax below 2.5L. Take income amount as an input from the user.
    */

    int salary;
    float tax;
    printf("Enter Your Yearly Income: ");
    scanf("%d", &salary);

    if(salary < 250000){
        tax = 0;
    }else if (salary >= 250000 && salary < 500000){
        tax = 0.05 * (salary - 250000);
    }
    else if (salary >= 500000 && salary < 1000000){
        tax = 0.05 * (salary - 250000) + 0.2 * (salary - 500000);
    }else{
        tax = 0.05 * (salary - 250000) + 0.2 * (salary - 500000) + 0.3 * (salary - 1000000);
    }
    printf("Your Tax is %.2f", tax);
    return 0;
}