#include <stdio.h>

void	my_swap(void *a, void *b, size_t len)
{
  char	*s1;
  char	*s2;
  char	tmp;
  int	i;

  s1 = a;
  s2 = b;
  i = -1;
  while (++i < len)
    {
      tmp = s1[i];
      s1[i] = s2[i];
      s2[i] = tmp;
    }
}

int main(void)
{
  int	a = 1;
  int	b = 4;
  float	c = 43.6f;
  float	d = 21.42f;

  printf("[INT]BEFORE a= %d, b=%d\n", a, b);
  my_swap((void *)&a, (void *)&b, sizeof(int));
  printf("AFTER a= %d, b=%d\n\n", a, b);
  printf("[FLOAT]BEFORE c= %f, d=%f\n", c, d);
  my_swap((void *)&c, (void *)&d, sizeof(float));
  printf("AFTER c= %f, d=%f\n", c, d);
  return (0);
}
