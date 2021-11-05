/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 14:31:08 by mnaqqad           #+#    #+#             */
/*   Updated: 2021/11/03 14:37:48 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <unistd.h>
int	ft_toupper(int c)
{
	if (c >= 97 && c <=122)
	{
	return c - 32;
	}
return c;
}
int main(void)
{
	char c='*';
	char c2=ft_toupper(c);
	write(1,&c2,1);
}
