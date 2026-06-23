#include"stdio.h"
void main(){
    //WAP to print prime numbers between given interval.
    int lb,ub;
    printf("enter the lowerbound and upperbound:");
    scanf("%d %d",&lb,&ub);
    if (lb == 1)
    {
       lb++;
    }
    
    for ( int i = lb; i <= ub; i++)
    {
      int count=0;
        for ( int j = 2; j< i; j++)
        {
            if (i%j==0)
            {
                count++;
                break;
            }

            
        }
         if (count==0)
        {
           printf("%d",i);
        }
        
    }
    
}