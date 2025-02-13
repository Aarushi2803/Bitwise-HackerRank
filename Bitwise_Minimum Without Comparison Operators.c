#include <stdio.h>
int main() {
int a,b,x;
scanf("%d %d",&a,&b);
    x = a - b;
if(x & (1<<31)){
  printf("%d",a);
 }
else
    printf("%d",b);
}
