#include <stdio.h>
#include <math.h>

int BiToDe(long long n);

int main(){

    int de;
    long long bi;
    int result =0;
    printf("Enter a binary number: ");
    scanf("%lld", &bi);

    result = BiToDe(bi);
    printf("%lld in binary = %d in decimal\n", bi, result);


    return 0;
}

int BiToDe(long long n){
    int result = 0, i = 0, rem = 0;
    while (n != 0){
        
    }

    return result;
}