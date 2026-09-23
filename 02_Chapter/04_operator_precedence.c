#include <stdio.h>

int main(){
    /*
    Operator Precedence
    matlab agar koi Value  3*x – 8*y is tara aa jat hai tu C main kiya hota hai 
    Normal Math main tu BODMAS hota hai But C main nahi
    us k liye C main operator precedence & associativity use hoty hain
    yani marhala war 
    
The following table lists the operator priority in C:
Priority  | Operators
1st       |  * / %
2nd       |  + -
3rd       |   =
matlab k 3*x – 8*y main se pehly 3*10=30 ho ga phir 8*2=16 phir un ki result yani 30 or 16 par minus kary ga jo k 30 - 16 = 14 ho ga
ek important baat ye k ye tab hi ho ga jab k () na lagy ho warna agar () lagy ho tu pehly un ko value par jo bhi ho + - wo ho ga    
or ye operator precedence hai
*/

    int a = 10;
    int b = 20;
    int c = 3;
    int d = 5;
    int e = a*b - c*d;
    printf("%d", e);
    return 0;
}