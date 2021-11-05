/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 16:03:34 by mnaqqad           #+#    #+#             */
/*   Updated: 2021/11/03 17:00:35 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
int ft_memcmp(const void *s1,const void *s2,size_t n)
{
 unsigned char *ss1=(unsigned char*)s1;
 unsigned char *ss2=(unsigned char*)s2;
 size_t i=0;
 if ( n == 0)
 {
	 return (0);
 }
 while(i < n)
 {
	 
	 return (ss1[i] - ss2[i]);
	 i++;
 }
 return (0);
}
int main(void)
{
	char *s="a";
    char *s2="b";
    printf("%d \n",memcmp(s,s2,0));
	printf("%d \n",ft_memcmp(s,s2,0));
}
