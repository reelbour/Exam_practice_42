#include <stdlib.h>

char *ft_itoa_base(int value, int base)
{
  int len;
  char *pointer;
  long nb;
  char *base_string = "0123456789ABCDEF";

  if (value = 0)
    return ('0');
  len = 0;
  nb = value;
  while(nb)
  {
    len++;
    nb /= base;
  }
  nb = value;

  if (nb < 0)
  {
    if (base == 10)
      len++;
    nb *= -1;
  }
  if (!(pointer = malloc(sizeof(char) * len + 1)))
    return NULL;
  pointer[len] = '\0';

  while(nbr)
  {
    pointer[--len] = base_string[nb % base];
    nb = nb / base;
  }
  if (value < 0 && base == 10)
    pointer[0] = '-';

  return pointer;
}
