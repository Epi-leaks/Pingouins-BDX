#include <stdio.h>

void	ma_fonction(int *toto)
{
  *toto = *toto + 1;
}

int	main(void)
{
  int	a = 3;

  ma_fonction(&a);
  printf("a = %d\n", a);
  return (0);
}
