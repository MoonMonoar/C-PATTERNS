/*
Write a C program to find the largest of three numbers.
Test Data : 12 25 52
Expected Output :
1st Number = 12,        2nd Number = 25,        3rd Number = 52
The 3rd Number is the greatest among three
*/
#include <stdio.h>
int main(){
    int a,b,c;
    printf("Enter three numbers: ");
    scanf("%d %d %d",&a,&b,&c);
    printf("1st Number = %d,\t2nd Number = %d,\t3rd Number = %d\n",a,b,c);
    if(a>b && a>c){
        printf("The 1st Number is the greatest among three\n");
    }
    else if(b>a && b>c){
        printf("The 2nd Number is the greatest among three\n");
    }
    else{
        printf("The 3rd Number is the greatest among three\n");
    }
    return 0;
}