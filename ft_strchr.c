/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 14:44:17 by mnaqqad           #+#    #+#             */
/*   Updated: 2021/11/03 16:11:52 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
char	*ft_strchr(const char *s,int c)
{
	int i=0;
	while(s[i] != '\0')
	{
		if(s[i] == c)
		{
			return ((char*)&s[i]);
		}
		i++;
	}
	return 0;
}

int main(void)
{
	char *s="hello";
	printf("%s \n",strchr(s,'b'));
	printf("%s \n",ft_strchr(s,'b'));
}

