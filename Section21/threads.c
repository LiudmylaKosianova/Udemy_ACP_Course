#include <stdio.h>
#include <pthread.h>

void *helloFun(){
    printf("HelloFun\n");
    return NULL;
}

int main(){

    pthread_t redSofa;
    pthread_create(&redSofa, NULL, helloFun, NULL );
    pthread_exit (NULL);
    return 0;
}