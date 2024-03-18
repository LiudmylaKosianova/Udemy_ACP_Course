#include <stdio.h>

#define SUM(x,y) (x)+(y)

int main(){

    printf("The line number is %d\n", __LINE__);
    printf("The file name is %s\n", __FILE__);
    printf("Compiled today: %s\n", __DATE__);
    printf("Compiled at %s\n", __TIME__);
    printf("__STDC__ is %d\n", __STDC__);

    /*use SUM*/
    int a,b;
    printf("Enter an integer: ");
    scanf("%d", &a);
    printf("Enter the second integer: ");
    scanf("%d", &b);
    int sum = SUM(a,b);
    printf("I added them with my macro: %d", sum);


    return 0;
}