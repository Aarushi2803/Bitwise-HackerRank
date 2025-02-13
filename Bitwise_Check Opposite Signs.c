#include <stdio.h>

int main() {
int n,a,b;
 scanf("%d %d",&a,&b);
    
    n=a*b;
    if(n==0 &&(a<0 || b<0)){ printf("Yes");
              return 0;              
    }
    ((n>>31)&1)?printf("Yes"):printf("No");
    return 0;
}