/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 15:35:34 by mnaqqad           #+#    #+#             */
/*   Updated: 2021/11/04 16:39:59 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
char *ft_strjoin(char const *s1,char const *s2)
{
	size_t len=ft_strlen(s1)+ft_strlen(s2);
	int i=0;
	int res=0;
      char *clon=(char*)malloc(sizeof(char)*(len+1));
	  if(clon == NULL)
	  {
		  return (NULL);
	  }
	  while(s1[i] != '\0')
	  {
		  clon[i]=s1[i];
		  i++;
	  }
	  while(s2[res] != '\0')
	  {
		  clon[i]=s2[res];
		  i++;
		  res++;
	  }
	  clon[i]='\0';
	return (clon);

}
int main(void)
{
     char *s1="hello";
	 char *s2=" world";
	 printf("%s \n",ft_strjoin(s1,s2));

}
