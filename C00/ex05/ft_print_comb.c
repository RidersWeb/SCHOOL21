#include <unistd.h>

void    ft_print_comb(void)
{
    int i;
    int y;
    int j;

    i = '0';
    while (i <= '7')
    {
        y = '1';
        while (y <= '8')
        {
            j = '2';
            while (j <= '9')
            {
                if(i < y && i != y && y < j && y != j && 1 != j)
                {
                    write(1, &i, 1);
                    write(1, &y, 1);
                    write(1, &j, 1);
                    write(1, ", ", 2);
                }
                    j++;      
            }
            y++; 
        }
        i++;
    }
    write(1, "\b\b ", 3);
}