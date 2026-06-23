#include"stdio.h"
 //WAP to find factorial of a number. (Using loop & recursion) 
int recursion(int n){
    if (n==1)
    {
        return 1;
    }
    else{
        return n* recursion(n-1);
    }
}
void main(){
    int num;
    printf("enter the num:");
    scanf("%d",&num);
    printf("factorial of %d:%d",num,recursion(num));
}
