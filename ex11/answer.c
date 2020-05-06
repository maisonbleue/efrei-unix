#include <stdio.h>

int main() {
  int a, b, c;
  a = 0;

  while (a < 8) {
    b = a + 1;
    while (b < 9) {
      c = b + 1;
      while (c < 10) {
        printf("%d%d%d\n", a, b, c);
        c++;
      }
      b++;
    }
    a++;
  }
}
