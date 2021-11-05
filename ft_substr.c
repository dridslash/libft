/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 12:48:01 by mnaqqad           #+#    #+#             */
/*   Updated: 2021/11/04 15:54:32 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
char	*ft_substr(char	const *s,unsigned int start,size_t len)
{
	char *sub=(char*)malloc(len+1*sizeof(char));
	if(sub == NULL)
	{
		return (NULL);
	}
	unsigned int index;
	index=0;
	while(start < len && s[start] != '\0')
	{
		sub[index]=s[start];
		index++;
		start++;
	}
	sub[index]='\0';
	return (sub);
}

int main(void)
{
	char *s="hello";
	char *sb=ft_substr(s,0,1);
	printf("original : %s \n substring : %s \n",s,sb);
}
