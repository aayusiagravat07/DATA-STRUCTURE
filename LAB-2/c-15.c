#include"stdio.h"
void main(){
    
    int i;
    int sum=0,rem,temp;
    //WAP to print Armstrong number from 1 to 1000. 
    for (i = 1; i <= 1000; i++)
    {
        temp=i;
        sum=0;
        while(temp!=0)
        {
          rem=temp%10;
          sum= sum+rem*rem*rem;
          temp=temp/10;  
        }
        if (sum==i)
    {
        printf("%d",i);
    }   
    } 
}