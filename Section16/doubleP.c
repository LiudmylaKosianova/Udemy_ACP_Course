#include <stdio.h>


int main(){

    int v = 11;
    int *p1 = NULL;
    int **p2 = NULL; //double pointer
    /*double pointer can store the address of anoutther
    pointer only, not an address of int variable*/

    p1 = &v;
    p2 = &p1;

    printf("%p address of v\n",(void*) &v);//%p expects void pointer, otherwise, there can be unexpected results
    printf("%p address of p1\n", (void*) &p1);
    printf("%p address of p2\n",(void*) &p2);



    return 0;
}