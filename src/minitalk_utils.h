/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk_utils.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aude-la- <aude-la-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 18:42:34 by aude-la-          #+#    #+#             */
/*   Updated: 2025/06/23 15:33:34 by aude-la-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_UTILS_H
# define MINITALK_UTILS_H

# include "utils.h"

char	bit_to_c(char *octet);
int		manage_sig(int sig, pid_t sender_pid);
void	secure_kill(pid_t pid, int sig);
void	print_message(char **txt, int *l);

#endif
