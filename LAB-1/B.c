#include"stdio.h"
void main(){
    int sec;
    int hh,mm,ss,new;
   printf("enter the seconds:");
   scanf("%d",&sec);
   hh=sec/3600;
   new = sec%3600;
   mm=new/60;
   ss= new%60;
printf("%d:%d:%d",hh,mm,ss);
}