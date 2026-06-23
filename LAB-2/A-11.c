#include"stdio.h"
void main(){
    // WAP to find factors of a given number.
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        if (n%i==0)
        {
            printf("%d",i);
        }
        
    }
    
}