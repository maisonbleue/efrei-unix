#include <stdio.h>

void my_swap(int *i, int *j) {
  int tmp = *i;
  *i = *j;
  *j = tmp;
  printf("display addresse of i: %p\n", i);
  printf("display value that i is pointing to:%d\n", *i);
}

int   main(int ac, char **av) {
  int i = 10;
  int j = 20;

  printf("i = %d - j = %d\n", i, j);
  my_swap(&i, &j);
  printf("i = %d - j = %d\n", i, j);
  return (0);
}
