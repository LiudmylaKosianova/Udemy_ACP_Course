/*
stdin, stdout, stderr
*/

#include <stdio.h>

int main(){
    
    char ch = '\n';
    FILE *fp; //file pointer
    if (fp = fopen("filename.c", "rw")){//open the file
        ch = getc(fp); //gets the first character from a file

        while (ch != EOF){//check for the end of file
            ch = getc(fp); //get the next character
        }
        fclose(fp); //close the file
    } 
    



    return 0;
}