#include <stdio.h>

int main() {
int n;
scanf("%d",&n);
// first method
    float x = n + n+ n+ (n>>1);
   printf("%.0f",x);  

//    second method
  //   float x;
  //   scanf("%d",&n);
  //   x = (n<<2)-(n>>1);
  // ;
  //   printf("%.0f",x);
  //   return 0;
}