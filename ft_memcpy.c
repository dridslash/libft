/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 18:15:13 by mnaqqad           #+#    #+#             */
/*   Updated: 2021/11/02 19:23:11 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>
#include <string.h>
void *ft_memcpy(void *restrict dest,const void *restrict src,size_t n)
{
	char *d=(char*)dest;
	char *

int main(void)
{
	char src[50]="hello";
	char dest[50]="world";
	printf("%s\n",memcpy(dest,src,2));
}
