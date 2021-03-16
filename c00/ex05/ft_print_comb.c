#include <unistd.h>

void	ft_print_comb(void)
{
	char t[5];

	*t = '0';
	t[1] = '1';
	t[2] = '2';
	t[3] = ',';
	t[4] = ' ';
	while (*t < '8')
	{
		write(1, t, (*t != '7') ? 5 : 3);
		if (++t[2] > '9')
		{
			if (++t[1] > '8')
				t[1] = ++(*t) + 1;
			t[2] = t[1] + 1;
		}
	}
}
