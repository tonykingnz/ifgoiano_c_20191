#include <stdio.h>
#include <stdlib.h>

int main(){
  int a = 678;
  float b = 12.3456;

  printf("\n|%5d|", a );
  printf("\n|%06d|", a);
  printf("\n|%7.3f|", b );
  printf("\n|%7.2f|\n", b);

  return 0;
}
