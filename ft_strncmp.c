/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 15:30:16 by mnaqqad           #+#    #+#             */
/*   Updated: 2021/11/04 10:22:24 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>
int     ft_strncmp(const char  *s1,const char    *s2,size_t   n)
{
	size_t i=0;
	if( n ==0)
	{
		   return 0;
	}
	while(*s1 != '\0' && *s2 != '\0' && *s1 == *s2 && i < n-1  )
	{
		   s1++;
		      s2++;
		         n--;
	}
	return *s1 - *s2;

}
int main()
{
	char a [10]="b";
	char b [10]="z";

	int d =ft_strncmp(a,b,1);
	int f= strncmp(a,b,1);
	printf("%d \n",d);
	printf("%d",f);
}
