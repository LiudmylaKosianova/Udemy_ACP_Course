#include <stdio.h>
#include <setjmp.h>

jmp_buf buf;
void error_recovery(){
    printf("A error detected\n");
    longjmp(buf,1);
}

int main(){

    while(1){
        if(setjmp(buf)){
            printf("back in main\n");
            break;
        }
        else{
            error_recovery();
        }
    }

    return 0;
}