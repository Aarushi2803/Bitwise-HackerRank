#include <stdio.h>  
int main() {
int a,b,sign;
scanf("%d %d",&a,&b);
int x = a - b; 
  // sign =(x & (1<<31) & 1);   my approch of maxand min is right but without if-else not working
sign =( x>>31);
// int m =( (a*(1-sign)) + (sign * b));  with arethimetic opreator
    int m =(( a & (~sign)) | (sign & b));   //with bitwise opreator
    printf("%d",m);  
}