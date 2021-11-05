/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 15:34:17 by mnaqqad           #+#    #+#             */
/*   Updated: 2021/11/04 11:48:17 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
void *ft_memchr(const void *s,int c,size_t n)
{
	unsigned char *ss=(unsigned char *)s;
	size_t i=0;
	while( i < n)
	{
		if (ss[i] == c)
		{
			s=&ss[i];
			return (unsigned char*)s;
		}
		i++;
	}
	return 0;
}

int main(void)
{
	char s[20]="hello";
    printf("%s \n",memchr(s,'h',5));
	printf("%s \n",ft_memchr(s,'h',5));
}
