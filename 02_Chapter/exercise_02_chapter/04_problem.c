#include <stdio.h>

int main(){
     /*
    Q4: Explain step by step evaluation of 3*x/y-z+k , where x = 2 , y = 3 , z = 3 , k = 1 .
    */
    int x = 2;
    int y = 3;
    int z = 3;
    int k = 1;

    /*
    is main wo hi ho ga k pehly * or / ko karen gay phir - or + ko 
    us main bhi ham left to rigt jae gay

    3*2/3-3+1
    pehly 3 * 2 = 6 yani 6/3-3+1
    phir 6/3 = 2 yani 2-3+1
    phir 2 - 3 = -1 yano -1+1
    phir -1 + 1 = 0 yani ans is 0
    */

    printf("The ans is %f", 3*x/y-z+k);
    return 0;
}