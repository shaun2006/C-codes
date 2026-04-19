#include <stdio.h>

int add(int x, int y){
  return x+y;
}
int mul(int w, int z){
  return w*z;
}
int main(){
  int a,b;
  a = add(2,3);
  printf("Total = %d\n",a);
  a = add(20,10);
  printf("Total = %d\n",a);
  b = mul(10,2);
  printf("Multiplying = %d\n", b);
}
