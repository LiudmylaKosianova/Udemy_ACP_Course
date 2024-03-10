#include <stdio.h>

int sum(int a){
    //find sum a number;
    static int x;
    x=a;

    return x+a;
}

int main(){

    printf("%d\n", sum(15));
    printf("%d\n", sum(25));
    printf("%d\n", sum(30));

    return 0;
}