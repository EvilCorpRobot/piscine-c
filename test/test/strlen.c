#include <stdio.h>

int		len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int main(void)
{
    int a;
    char salut[] = "1000000000000000000000000000000000000";
    a = len(salut);
    printf("%d", a);



    
}