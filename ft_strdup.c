/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 09:52:58 by mnaqqad           #+#    #+#             */
/*   Updated: 2021/11/04 09:53:03 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
char    *ft_strdup(const char *src)
{
	    size_t i;
	        i = 0;
		       size_t len=ft_strlen(src);
		              char *t=(char*)malloc(sizeof(char)*(len+1));
			             if ( t == NULL) 
                                              {
                                              return (0);
								          
                                              }
				            while(src[i] != '\0')
						           {
							t[i]=src[i];
				                        i++;
				                         }
					           t[i]='\0';
						          return (t);
}
