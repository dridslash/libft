/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 16:14:18 by mnaqqad           #+#    #+#             */
/*   Updated: 2021/11/01 17:41:30 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isalpha(int chr)
{
	if ((chr >= 65 && chr <= 90) || (chr >= 97 && chr <= 122))
	{
		return (1);
	}
	return (0);
}