#include "shell.h"

/*
* signals.c
*/
void	ft_child_signal(int signo)
{
	if (signo == SIGINT)
	{
		ft_putstr("\n");
		signal(SIGINT, ft_child_signal);
	}
}

void	ft_signal(int signo)
{
	if (signo == SIGINT)
	{
		ft_putstr("\n");
		prompt();
		signal(SIGINT, ft_signal);
	}
}
