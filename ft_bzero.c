/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 18:03:09 by mnaqqad           #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2021/11/04 13:00:20 by mnaqqad          ###   ########.fr       */
=======
/*   Updated: 2021/11/02 18:03:13 by mnaqqad          ###   ########.fr       */
>>>>>>> 04b3f9765e28104a5f6c0f30289b3995105b60c3
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
