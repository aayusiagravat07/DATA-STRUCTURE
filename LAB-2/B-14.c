#include"stdio.h"
void main(){
    //WAP to find the sum of 1 + (1+2) + (1+2+3) + (1+2+3+4)+ …+(1+2+3+4+….+n). 
    int n,sum2=0;
    printf("enter the n:");
    scanf("%d",&n);
    for (int i = 0; i <=n; i++)
    {
        int sum=0;
        for (int j = 1; j <=i; j++)
        {
            sum+=j;
        }
        sum2+=sum;
        
    }
    printf("%d",sum2);
}