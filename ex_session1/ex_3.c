#include <stdlib.h>
#include <stdio.h>

void	engrave_light_saber(char *model, char *engraving)
{
  while (*(model))
    *(engraving++) = *(model++);
}

char	*engrave_light_saber_2(char *model, char *engraving)
{
  int	n;

  n = 0;
  while (model[n] != 0)
    {
      engraving[n] = model[n];
      n++;
    }
  return (engraving);
}

int	main(void)
{
  char *tmp = "Hello World";
  char test[30] = {0};
  engrave_light_saber(tmp, test);
  printf("%s\n", test);
  return (0);
}
