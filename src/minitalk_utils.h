/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk_utils.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aude-la- <aude-la-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 18:42:34 by aude-la-          #+#    #+#             */
/*   Updated: 2024/05/22 19:05:16 by aude-la-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_UTILS_H
# define MINITALK_UTILS_H

# define WAITING_TIME 30

# include "utils.h"

char	bit_to_c(char *octet);
int		manage_sig(int sig);
void	secure_kill(pid_t pid, int sig);
int		is_all_zeroes(const char *str);
void	print_init(char **txt, int *l);

#endif
