#include <unistd.h>

void my_putchar(char c) {
  write(1, &c, 1);
}


// recursive version
void my_putnbr(int nb) {
  if (nb < 0)
    {
      my_putchar('-');
      nb = nb * (-1);
    }
  if (nb >= 10) {
    my_putnbr(nb / 10);
  }
  my_putchar((nb % 10) + 48);
}

// iterative version
void my_iterative_putnbr(int nb) {
  int d;
  int tmp;

  d = 1;

  if (nb < 0) {
    my_putchar('-');
    nb = nb * (-1);
  }

  tmp = nb;

  while (tmp >= 10) {
    tmp = tmp / 10;
    d = d * 10;
  }
  while (d > 0) {
    my_putchar((nb / d) % 10 + 48);
    d = d / 10;
  }
}

int main(int ac, char **av) {
  int i;

  i = 0;

  while (i < 10) {
    i = i + 1;
  }

  my_putnbr(-345);
  my_putchar('\n');
  my_iterative_putnbr(-345);
  my_putchar('\n');
  return (0);
}
