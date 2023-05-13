#include "main.h"

int main(int ac, char **av)
{
    int i;

    for (i = 1; i < ac; i++)
    {
        printf("This is what you entered\n %s \n", av[i]);
    }
    return 0;
}