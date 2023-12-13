#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>
int main(void) {
  int i, n;
  int a = 0, b = 1;
  int nextTerm = a + b;
  printf("Toogoo hii: ");
  scanf("%d", &n);
  printf("ih toonuud: %d, %d, ", a, b);
  for (i = 3; i <= n; ++i) {
    printf("%d, ", nextTerm);
    a = b;
    b = nextTerm;
    nextTerm = a + b;
  }
  return 0;
}
