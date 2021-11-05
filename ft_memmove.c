/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 10:30:24 by mnaqqad           #+#    #+#             */
/*   Updated: 2021/11/03 15:58:09 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>
void	*ft_memmove(void *dest,const void *src,size_t n)
{
	unsigned char *d=(unsigned char *)dest;
	unsigned char *s=(unsigned char *)src;
	unsigned char *tmp;
	int i=0;
	while(i < n)
	{
		tmp[i]=s[i];
		i++;
	}
	i=0;
	while(i < n)
	{
		d[i]=tmp[i];
		i++;
	}
	dest=d;
	return (dest);
}

int main (void)
{
	char s[20]="hello";
	char s2[20]="world";
	printf("%s \n",memmove(s2,s,2));
	printf("%s \n",ft_memmove(s2,s,2));
}
