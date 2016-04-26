void	swap_light_saber(int *sabre_laser_1, int *sabre_laser_2)
{
  int	*tmp;

  *tmp = *sabre_laser_1;
  *sabre_laser_1 = *sabre_laser_2;
  *sabre_laser_2 = *tmp;
}

int	main(void)
{
  int	a;
  int	b;

  a = 35;
  b = 40;
  swap_light_saber(&a, &b);
  return (0);
}
