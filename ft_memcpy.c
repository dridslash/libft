/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 18:15:13 by mnaqqad           #+#    #+#             */
/*   Updated: 2021/11/04 11:51:05 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>
#include <string.h>
void	*ft_memcpy(void	*dest,const void *src, size_t n)
{
	unsigned char *d=(unsigned char*)dest;
	unsigned char *s=(unsigned char*)src;
	size_t i=0;
	while(i < n)
	{
		d[i]=s[i];
		i++;
	}
	dest=d;
	return dest;
}
int main(void)
{
	char src[50]="hello";
	char dest[50]="world";
	printf("%s\n",memcpy(dest,src,2));
	printf("%s \n",ft_memcpy(dest,src,2));
}
