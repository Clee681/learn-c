#include <stdio.h>

/* copy input to output; 1st version */

int main()
{
  int c;

  printf("%d", EOF);

  c = getchar();
  while (c != EOF) {
    putchar(c);
    c = getchar();
  }
}
