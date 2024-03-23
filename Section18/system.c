#include <stdlib.h>
#include <string.h>

int main(){

    char command[70];
    strcpy(command, "ls -la");
    system(command);


    return 0;
}
