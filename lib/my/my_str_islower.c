/*
** my_str_islower.c for my_str_islower.c in /home/cedric/delivery/CPool_Day06
** 
** Made by Cédric Thomas
** Login   <cedric@epitech.net>
** 
** Started on  Mon Oct 10 17:24:58 2016 Cédric Thomas
** Last update Mon Oct 10 18:08:33 2016 Cédric Thomas
*/

#include <stdlib.h>

int	my_str_islower(char *str)
{
  int	i;
  int	bool;

  i = 0;
  bool = 1;
  if (str == NULL)
    return (0);
  while (str[i] != 0)
    {
      if (str[i] < 'a' || str[i] > 'z')
	bool = 0;
      i += 1;
    }
  return (bool);
}
