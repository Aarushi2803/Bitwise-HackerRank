#include <stdio.h>
int main() {
int n;
int flag=0;
scanf("%d",&n);
 for(int i=0;i<=31;i++){
   if((n&(1<<i))==0){ 
       printf("%d",i+1);
     flag=1;
     // return 0;
       break;
   }
 }  
 if(flag==0) printf("-1");   
return 0;
}