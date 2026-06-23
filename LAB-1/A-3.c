#include"stdio.h"
void main(){
    char c;
  printf("enter the character:");
  scanf("%c",&c);
  if(c=='A'||c=='E' ||c== 'I' || c=='O' || c=='U'){
    printf("vowel");  
}
else{
    printf("char is not vowel");
}
}