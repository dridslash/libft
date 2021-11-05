/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 15:44:48 by mnaqqad           #+#    #+#             */
/*   Updated: 2021/11/04 12:57:04 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>
#include <string.h>
size_t	ft_strlcpy(char	*dest, const char *src,size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if(dstsize > 0)
	{

		while (src[i] != '\0' && i <  dstsize - 1)
		{
			dest[i] = src[i];
			i++;
		}
			dest[i]=0;
		}
		j = ft_strlen(src);
	return (j);
}
int main(void)
{
	char dest[20]="hello";
	char dest2[20]="hello";
	char src[20]="worlds";
	size_t i=ft_strlcpy(dest,src,5);
	size_t i2=strlcpy(dest2,src,5);
	printf("ft_strlcpy : %ld \n",i);
	printf(" ft_strlcpy : %s\n",dest);
	printf(" strclpy : %ld \n",i2);
	printf(" strlcpy : %s \n",dest2);
}
