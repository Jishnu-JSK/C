/*Simple Calculator*/
#include <stdio.h>
int cal(int x,int y,char op){
    int result;
    switch(op){
        case '+':
        result=x+y;
        printf("SUM:%d\n",result);
        break;
        case '-':
        result=x-y;
        printf("DIFFERENCE:%d\n",result);
        break;
        case '*':
        result=x*y;
        printf("PRODUCT:%d\n",result);
        break;
        case '/':
        if (y==0){
            printf("Not Possible!!\n");
            return 0;
        }
            result=x/y;
            printf("QUOTIENT:%d\n",result);
            break;
        case '%':
        if (y==0){
            printf("Not Possible!!\n");
            return 0;
        }
        else {
        result=x%y;
        }
        printf("REMAINDER:%d\n",result);
        break;
        default:
        printf("INVALID OPERATOR!!!\n");
        break;
    }
    return result;
}
int main(){
    char run='Y';
    while (run=='Y' || run=='y'){
        int a,b;
        char op;
        printf("Enter 1st number:");
        scanf("%d",&a);
        printf("Enter 2nd number:");
        scanf("%d",&b);
        printf("CALCULATOR\nADD +\nSUBTRACT -\nMULTIPLY *\nDIVIDE / \nMODULUS %% \nEnter an Operator:");
        scanf(" %c",&op);
        cal(a,b,op);
        printf("Do u want to continue?[Y/N]");
        scanf(" %c",&run);
        if (run != 'Y' && run != 'y'){
            printf("Exiting the Calculator!\n");
            break;
        }
    }
    return 0;
}