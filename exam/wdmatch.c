#include <unistd.h>
#include <stdio.h>

int main(int ac, char **av)
{
    int i;
    int j;
    int l;

    i = 0;
    j = 0;
    l = 0;
    while(av[1][i] && av[2][j])
    {
        if(av[1][i] == av[2][j])
        {
            i++;
        }
        j++;
    }

    if(av[1][i] == '\0')
    {
        while(av[1][l])
        {
            write(1, &av[1][l], 1);
            l++;
        }
    }
    write(1, "\n", 1);
    return 0;
}
