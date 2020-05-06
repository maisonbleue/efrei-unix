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

void display_odd_count_even(int *tab, size_t size) {
  int i = 0;
  int count = 0;

  while (i < size) {
    if (tab[i] % 2 == 0) {
      count++;
    } else {
      my_putnbr(tab[i]);
      my_putchar('\n');
    }
    i++;
  }
  my_putnbr(count);
  my_putchar('\n');
}

int main(int ac, char **av) {
  int tab[] = {0, 1, 2, 2, 4, 2, 6, 1, 8, 9, 10};

  display_odd_count_even(tab, 11);
  return (0);
}
