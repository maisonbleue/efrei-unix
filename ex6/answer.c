#include <unistd.h>

void my_printchar(char c) {
  write(1, &c, 1);
}
