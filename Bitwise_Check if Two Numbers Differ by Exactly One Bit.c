#include <stdio.h>
int main() {
int a,b,c;
scanf("%d %d",&a,&b);
c = a ^ b;   
if ((c!=0 )&& (c & ( c - 1 ))==0)  {  
        printf("Yes\n");
    }
    else printf("No\n");
}  