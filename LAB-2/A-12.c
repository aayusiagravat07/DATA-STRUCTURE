#include"stdio.h"
void main(){
    //WAP to check whether a number is prime or not.
    int n;
    printf("enter the n:");
    scanf("%d",&n);
    int count=0;
    for (int i = 1; i <=n; i++)
    {
        if (n%i==0)
        {
            count++;
        }
        
    }
    if (count==2)
    {
        printf("%d is prime",n);
    }
    else{
        printf("%d is not prime",n);
    }
}