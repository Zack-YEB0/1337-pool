#include <unistd.h>
int main(int ac ,char **av)
{
    int i;
    i = 0;
    if (ac == 2)
    {
        while (av[1][i] != '\0')
        {
            if (av[1][i] >= 'a' && av[1][i] <= 'z')
                write (1,&av[1][i],1);
            else if (av[1][i] >= 'A' && av[1][i] <= 'Z')
                write (1,&av[1][i],1);
            else if ((av[1][i] >= '\r' && av[1][i] >= '\t') || av[1][i] == ' ')
					i++;		
           i++;
        }
    }
    write (1,"\n",1);
}
