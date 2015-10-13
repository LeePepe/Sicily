#include <stdio.h>
#include <stdlib.h>

int main() {
  int a;
  int *ad;
  ad = &a;
  scanf("%d", ad);
  printf("%d", a);

  return 0;
}
