#include <stdio.h>
int ft_strcmp(char *s1, char *s2)
{
    int i = 0;
    int j = 0;
    while (s1[i])
    {
        i++;
    }

    while (s2[j])
    {
        j++;
    }
    
    return i - j; 


    
}

int main()
{
    char *str1 = "hello";
    char *str2 = "hell";

    printf("%d", ft_strcmp(str1, str2));
    
    return 0;
}