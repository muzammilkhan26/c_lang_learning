#include <stdio.h>

int main(){
/*
Q1: Write a C program to calculate the area of a rectangle:
a. Using hard coded inputs.
b. Using inputs supplied by the user.
*/
/*
    int len;
    int wid;

    printf("Enter The Lenth \n");
    scanf("%d", &len);
    printf("\n Enter The Width \n");
    scanf("%d", &wid);
    printf("The area of this rectangle is %d", len * wid);
*/

/*
Q2: Calculate the area of a circle and modify the same program to calculate the volume of a cylinder given its radius and height.
https://github.com/CodeWithHarry/The-Ultimate-C-Programming-Course
*/

    // float c = 6;
    // int height = 10;
    // printf("The are of circle with radius %f is %f \n", c, 3.14 * c * c);
    // printf("The are of Cylendir with radius %f and height %d is %f", c, height ,3.14 * c * c * height); 


/*
Q3: Write a program to convert Celsius (Centigrade) temperature to Fahrenheit.
*/
    // int Cel = 37;
    // printf("The Fer of %d is %.1f°F", Cel, (Cel * 9.0 / 5.0) + 32);


/*
Q4: Write a program to calculate simple interest for a set of values representing principal, number of years, and rate of interest.
*/


    float p = 34.1;
    int r = 8;
    int t = 5;
    printf("The Simple Value of intrest is %f ", (p * r * t) / 100);

    return 0;
}