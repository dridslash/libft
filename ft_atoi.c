/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 17:33:38 by mnaqqad           #+#    #+#             */
/*   Updated: 2021/11/04 09:55:33 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
static int ft_isspace(const char chr)
{
	if(chr == ' '
			|| chr == '\n'
			|| chr == '\t'
			|| chr == '\v'
			|| chr == '\f'
			|| chr == '\r')
	{
		return (1);
	}
	return (0);
}
int	ft_atoi(const char *nptr)
{
	int i=0;
	int x=1;
	int result=0;
	while(ft_isspace(nptr[i]))
		i++;
	if(nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
		x*=-1;
		i++;
	}
	while(nptr[i] >= '0' && nptr[i] <= '9')
	{
		result=(result * 10) + nptr[i] - '0';
		i++;
	}
	return (result * x);
}
