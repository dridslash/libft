/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 18:24:33 by mnaqqad           #+#    #+#             */
/*   Updated: 2021/11/01 18:29:36 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_isascii(int arg)
{
	if (arg >= 0 && arg <= 127)
	{
		return (1);
	}
	return (0);
}
int main(void)
{
	char c=' ';
		printf("result is %d \n ",ft_isascii(c));
}
