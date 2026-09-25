#include <stdio.h>

int main(){
    /*
    operator associativity:
    yani agar / * % ek line main aa gae tu kon sa pehly kam kary ga
    tu is ki ans hai left to right
    matlab left se kam karny shoro kary ga or last tak jae ga 
    jese k 
    10/5*6/2
    to pehly 10 5 se divide ho ga yani k 10/5 =2  ans 2*6/2 
    phir us ko jo ans ae ga wo 6 se multiply ho ga yani k 2 * 6 = 12 ans 12/2
    phir us multiply k bad jo ans ae ga wo 6 se devide ho jae ga yani k 12 / 2 = 6 ans 6
    
    ek or example dekho
    printf("The another thing %d", 10 / 5 * 6 / 2 + 10 * 5);
    is ka ans is tara bany ga k 
    pehly 10 5 se divide ho ga yani k 10/5 =2  ans 2*6/2 + 10 * 5 
    phir us ko jo ans ae ga wo 6 se multiply ho ga yani k 2 * 6 = 12 ans 12/2 + 10 * 5
    phir us multiply k bad jo ans ae ga wo 6 se devide ho jae ga yani k 12 / 2 = 6 ans 6 + 10 * 5
    us k bad ye abhi plus nahi ho ga bal k 10 ko 5 se multy ply karen gay yani 10 * 5 = 50 ans 6 + 50
    phir last main 6 ko 50 se plus karen gay tu ans ho ga 56 yani 6 + 50 = 56 ans 56
    */

    int a = 10;
    int b = 5;
    int c = 6;
    int d = 2;

    printf("The ans is %d\n", a / b * c / d + 10);
    printf("The another thing %d", a / b * c / d + 10 * 5);
    return 0;
}