/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 18:03:21 by mnaqqad           #+#    #+#             */
/*   Updated: 2021/11/02 19:03:23 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <string.h>
#include <stdio.h>

void	*ft_memset(void *s,int c,size_t n)
{
	size_t k=0;
	char *ss=(char *)s;
	while(k < n)
	{
		ss[k]=c;
		k++;
	}
	return s;
}
