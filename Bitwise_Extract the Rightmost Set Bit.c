#include <stdio.h>
int main() {
int n;

scanf("%d",&n);
 if(n==0){
              printf("0");
     return 0;

 }   
 for(int i=32;i>=1;i--){
    int x= n& (n-1);
     int y= x^n;
     if(y>>(i-1)&1){
         printf("%d",i);
     }
    
 }    

return 0;
}