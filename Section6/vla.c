#include <stdio.h>

int main(){

    int size, element;

    printf("How many elements do you want to sum? ");
    scanf("%d", &size);

    int arr[size];
    int i = size;
    int j = 0;
    int sume = 0;
    while(i>0){
        printf("Enter the element to sum: ");
        scanf("%d", &element);
        arr[j] = element;


    }


    return 0;
}