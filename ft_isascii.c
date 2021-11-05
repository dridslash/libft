/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 18:24:33 by mnaqqad           #+#    #+#             */
/*   Updated: 2021/11/05 23:17:44 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_isascii(int arg)
{
	if ((unsigned char)arg >= 0 && (unsigned char)arg <= 127)
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
