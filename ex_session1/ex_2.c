#include <stdlib.h>

int	average_light_saber(int *light_saber_list, size_t list_size)
{
  int	n;
  int	res;

  n = 0;
  res = 0;
  while (n < list_size)
    {
      res += light_saber_list[n];
    }
  res /= list_size;
  return (res);
}
