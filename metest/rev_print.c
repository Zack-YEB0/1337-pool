#include <unistd.h>
int steln(char *you)
{
	int i;
	i = 0;
	while (you[i])
	{
		i++;
	}
	return (i);
}
char *ft_rev_print (char *str)
{
	int i;
	i = steln(str);
	while (i >= 0)
	{
		write (1,&str[i],1);
		i--;
	}
	write (1,"\n",1);
	return (str);
}

