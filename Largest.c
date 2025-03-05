/*Program to find the largest number among three numbers*/
#include <stdio.h>
void main(){
    int a,b,c,lg;
    printf("Enter 1st number:");
    scanf("%d",&a);
    printf("Enter 2nd number:");
    scanf("%d",&b);
    printf("Enter 3rd number:");
    scanf("%d",&c);
    lg=a;
    if (lg < b){
        lg=b;
    }
    else if (lg <c){
        lg=c;
    }
    printf("Largest number among %d,%d,%d is %d\n",a,b,c,lg);
}
