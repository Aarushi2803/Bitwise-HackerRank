#include <stdio.h>
int main() {
int n,i;
scanf("%d %d",&n,&i);
if(n &(1<<i)){
    printf("1");
} else    printf("0");
}