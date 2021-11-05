/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 18:15:13 by mnaqqad           #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2021/11/04 11:51:05 by mnaqqad          ###   ########.fr       */
=======
/*   Updated: 2021/11/02 19:23:11 by mnaqqad          ###   ########.fr       */
>>>>>>> 04b3f9765e28104a5f6c0f30289b3995105b60c3
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>
#include <string.h>
<<<<<<< HEAD
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
=======
void *ft_memcpy(void *restrict dest,const void *restrict src,size_t n)
{
	char *d=(char*)dest;
	char *

>>>>>>> 04b3f9765e28104a5f6c0f30289b3995105b60c3
int main(void)
{
	char src[50]="hello";
	char dest[50]="world";
	printf("%s\n",memcpy(dest,src,2));
<<<<<<< HEAD
	printf("%s \n",ft_memcpy(dest,src,2));
=======
>>>>>>> 04b3f9765e28104a5f6c0f30289b3995105b60c3
}
