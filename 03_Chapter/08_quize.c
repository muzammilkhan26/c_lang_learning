#include <stdio.h>

int main() {
    int mark;

    printf("Enter Your Marks: ");
    scanf("%d", &mark);
    char result;
    if (mark>=90){
        result = 'A';
    }
    else if (mark >= 80)
    {
        result = 'B';
    }
    else if (mark >= 70)
    {
        result = 'C';
    }else if (mark >= 60)
    {
        result = 'D';
    }else if (mark >= 50)
    {
        result = 'E';
    }else{
        result = 'F';
    }

    printf("Your Grade is %c", result);
    return 0;
}