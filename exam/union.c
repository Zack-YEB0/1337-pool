#include <unistd.h>

int main(int ac, char **av)
{
    int used[256] = {0};
    int i;
    int j;

    if (ac == 3)
    {
        i = 1;
        while (i < 3)
        {
            j = 0;
            while (av[i][j])
            {
                if (used[av[i][j]] == 0)
                {
                    write(1, &av[i][j], 1);
                    used[av[i][j]] = 1;
                }
                j++;
            }
            i++;
        }
    }
    write(1, "\n", 1);
}
