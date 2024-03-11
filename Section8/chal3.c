#include <stdio.h>

/*border styles*/
#define SOLID 0
#define DOTTED 1
#define DASHED 2

/*colours*/
#define BLUE 4
#define GREEN 2
#define RED 1

#define BLACK 0
#define YELLOW (RED|GREEN)
#define MAGENTA (RED|BLUE)
#define CYAN (GREEN|BLUE)
#define WHITE (RED|GREEN|BLUE)

const char *colours[8] = {"black", "red", "green", "yellow", "blue", "magenta","cyan", "white"};

struct onscreen_box{
    unsigned int: 16;
    unsigned int opaque:1;//1-opeque, 0-transparen
    unsigned int colour:3;
    unsigned int borderShown:1;//1-shown, 0-not shown
    unsigned int colour:3;
    unsigned int borderStyle:2;
};

int main(){

    return 0;
}