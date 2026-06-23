#include"stdio.h"
void main(){
    //WAP to find power of a number using loop.
    int b,p,sum=1;
    printf("enter the base and power:");
    scanf("%d %d",&b,&p);
    for (int i = 1; i <=p; i++)
    {
      sum= sum*b;
    }
    printf("%d",sum);
}