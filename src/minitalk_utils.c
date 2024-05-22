/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aude-la- <aude-la-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 18:39:28 by aude-la-          #+#    #+#             */
/*   Updated: 2024/05/22 19:05:02 by aude-la-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk_utils.h"

char	bit_to_c(char *octet)
{
	char	c;
	int		j;

	c = 0;
	j = -1;
	while (++j < 8)
		c |= (octet[j] << (7 - j));
	return (c);
}

int	manage_sig(int sig)
{
	if (sig == SIGUSR1)
		return (1);
	else if (sig == SIGUSR2)
		return (0);
	else
		exit(1);
}

void	secure_kill(pid_t pid, int sig)
{
	if (kill(pid, sig) != 0)
	{
		ft_printf("\n\nError check if: ");
		ft_printf("\n\t- The pid: %d is OK", pid);
		ft_printf("\n\t- seveur is UP\n");
		exit(1);
	}
	usleep(WAITING_TIME);
}

int	is_all_zeroes(const char *str)
{
	int	i;

	i = 0;
	while (i < 8)
	{
		if (str[i] != 0)
			return (0);
		i++;
	}
	return (1);
}

void	print_init(char **txt, int *l)
{
	ft_printf("%s\n", *txt);
	free(*txt);
	*txt = NULL;
	*l = 0;
}
