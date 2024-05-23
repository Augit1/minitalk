/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aude-la- <aude-la-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 13:32:10 by aude-la-          #+#    #+#             */
/*   Updated: 2024/05/23 11:12:35 by aude-la-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H

# include <unistd.h>
# include <signal.h>
# include <stdlib.h>
# include "ft_printf.h"

int		ft_atoi(const char *str);
char	*ft_itoa(int n);
int		is_all_zeroes(const char *str);
int		ft_strlen(char *s);

#endif
