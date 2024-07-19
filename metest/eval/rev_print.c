#include <unistd.h>
int ft_strlen(char *str)
{
    int i;
    i = 0;
    while (str[i])
            i++;
    return (i);
}
int main(int ac, char **av)
{
    int j;
    int i;
    i = 0;
    j = ft_strlen(av[1][i]);
  if (ac == 2)
  {
      while (av[1][i] > 0)
      {
          write (1,&av[1][i],1);
          i--;
      }
  }
    write (1,"\n",1);
    
}
