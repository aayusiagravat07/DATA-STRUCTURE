#include"stdio.h"
void main(){
    // WAP to reverse a number.
    int num,rem,digit=0;
    printf("enter the number:");
    scanf("%d",&num);
    while (num!=0)
    {
      rem = num%10;
      digit = digit *10 +rem;
      num= num/10;  
    }
    printf("reverse number:%d",digit);
    
}