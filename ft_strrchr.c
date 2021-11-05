/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 15:08:00 by mnaqqad           #+#    #+#             */
/*   Updated: 2021/11/03 16:00:05 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
char	*ft_strrchr(const char *s,int c)
{
    int i=0;
	while(s[i] != '\0')
	{
		i++;
	}
	while(i >= 0)
	{
		if (s[i] == c)
		{
			return ((char*)&s[i]);
		}
		i--;
	}
	return 0;
}
int main(void)
{
	char *s="hellolllll";
	printf("%s \n",strrchr(s,'l'));
	printf("%s \n",ft_strrchr(s,'l'));
}
