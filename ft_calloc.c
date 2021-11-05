/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 18:10:31 by mnaqqad           #+#    #+#             */
/*   Updated: 2021/11/04 13:00:32 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t nmemb,size_t  size)
{
	if(nmemb ==0 || size == 0)
	{
		return (NULL);
	}
	void *tab=malloc(nmemb * size);
	ft_bzero(tab,nmemb);
	return tab;
}
/*int main(void)
{
	char *tb=ft_calloc(5,sizeof(char));
	
}*/
