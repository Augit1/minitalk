/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aude-la- <aude-la-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 14:04:31 by aude-la-          #+#    #+#             */
/*   Updated: 2024/05/16 15:54:53 by aude-la-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <signal.h>
#include <stdlib.h>


void	handle_sigusr1(int sig)
{



int	main(void)
{
	pid_t	pid;

	if (signal(SIGUSR1, 
	pid = 
