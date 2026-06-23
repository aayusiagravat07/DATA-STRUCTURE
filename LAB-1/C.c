#include"stdio.h"
void main(){
    int d;
    int yy,ww,dd,new;
    printf("entre the days:");
    scanf("%d",&d);
    yy=d/365;
    new=d%365;
    ww=new/7;
    dd=new%7;
    printf("%d:%d:%d",yy,ww,dd);
}