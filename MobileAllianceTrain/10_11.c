#include <stdio.h>
#include <stdlib.h>

int main() {
  int a, b;
  scanf("%d %d", &a, &b);
  a = b;
  swap(a, b);
  printf("a:%d b:%d\n", a, b);
  return 0;
}
