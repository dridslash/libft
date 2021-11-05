/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 18:03:09 by mnaqqad           #+#    #+#             */
/*   Updated: 2021/11/04 13:00:20 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void ft_bzero(void *s,size_t n)
{
	int i=0;
	unsigned char *ss=(unsigned char*)s;
	while( i < n)
	{
		ss[i]='\0';
		i++;
	}
}
/*int main(void)
{
	char s[50]="hello world";
	char s2[50]="hello wolrd";
	ft_bzero(s+3,1);
	bzero(s2+3,1);
	printf("%s\n",s);
	printf("%s\n",s2);
}*/
