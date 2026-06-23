#include"stdio.h"
void main(){
    int a ,b ,c ;
   printf("enter the a:");
    scanf("%d",&a);
    printf("enter the b:");
    scanf("%d",&b);
    printf("enter the c:");
    scanf("%d",&c);
    if(a>b && a>c) {
        printf("a is largest");
    }
    else if(b>a && b>c){
        printf("b is largest");
    }
    else{
        printf("c is largest");
    }
}