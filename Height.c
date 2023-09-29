/*
Write a C program to accept the height of a person in centimeters and categorize the person according to their height. 
*/
#include <stdio.h>
int main(){
    int h;
    scanf("%d", &h);
    if(h<150){
        printf("Dwarf\n");
    }
    else if(h>=150 && h<=165){
        printf("Average height\n");
    }
    else if(h>=165 && h<=195){
        printf("Taller\n");
    }
    return 0;
}