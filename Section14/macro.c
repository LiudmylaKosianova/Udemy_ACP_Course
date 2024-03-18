#include <stdio.h>

#define PI 3.14 // this is a symbolic constant
//function-like macros represent expressions
// backslash is used to extand macro to the next line
#define PRNT(a,b)\    
    printf("value a = %d\n",a);\
    printf("value b = %d\n", b);

int main(){

    int a = 224;
    int b = 87;
    PRNT(a,b);

    return 0;
}