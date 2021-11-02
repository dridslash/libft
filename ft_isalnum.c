/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 18:10:41 by mnaqqad           #+#    #+#             */
/*   Updated: 2021/11/01 18:18:22 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_isalnum(int arg)
{
	if ((arg >= 48 && arg <= 57) 
			|| (arg >= 65 && arg <= 90)
			|| (arg >= 97 && arg <= 122))
	{
		return (1);
	}
	return (0);
}
int main(void)
{
	char c='5'
		printf("the result is %d \n",ft_isalnum(c));
}
