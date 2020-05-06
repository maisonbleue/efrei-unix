#include <unistd.h>

void my_printchar(char c) {
  write(1, &c, 1);
}

void my_printalpha() {
  int i = 48;

  while (i <= 48 + 9) {
    my_printchar(i++);
  }
  my_printchar('\n');
}

int main() {
  my_printalpha();
}
