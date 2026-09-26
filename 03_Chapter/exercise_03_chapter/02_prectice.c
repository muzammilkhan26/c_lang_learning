#include <stdio.h>

int main(){
    /*
    Write a program to determine whether a student has passed or failed. To pass, a
    student requires a total of 40% and at least 33% in each subject. Assume there are
    three subjects and take the marks as input from the user.
    */

    int m1, m2, m3;
    printf("Enter Marks1: \n");
    scanf("%d", &m1);
    printf("Enter Marks2: \n");
    scanf("%d", &m2);
    printf("Enter Marks3: \n");
    scanf("%d", &m3);

    printf("The Marks are %d, %d and %d \n", m1, m2, m3);   
    /*
    ye meri method thi
    
    int total = m1 + m2 + m3;
    float per = (total / 300.0) * 100;

    if (m1>=33 && m2>=33 && m3>=33 && per >= 40){
        printf("You are Pass ");
    }
    else{
        printf("You are Fail ");
    }
    */

    // method 2
    if(m1<33 || m2 < 33 || m3 < 33){
        printf("You are Fail Bcz of Low Marks");
    }
    else if ((m1 + m2 + m3)/3 < 40) {
        printf("You are Fail Bcz of Low Percentage");
    }
    else{
        printf("You are Pass");
    }

    return 0;
}