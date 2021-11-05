/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 18:15:54 by mnaqqad           #+#    #+#             */
/*   Updated: 2021/11/03 18:15:57 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>


char    *ft_strnstr(const char *big,const char   *little,size_t len)
{
	int i=0;
	int j=0;
	int k=0;
	if(little[0] == '\0')
	{
		return ((char*)big);
	}
   	while(big[i] != '\0')
	{
		j=0;
	   	if(big[i] == little[0])
		{
		   	k=i;
			while(big[k] == little[j] && k < len)
			{
				if(little[j+1]=='\0')
				{
					return ((char*)&big[i]);
				}
				k++;
				j++;
			}
		}
		i++;
	}
	return (0);
}
int main()
{

	    char a[]="hello wolrd ";
	        

	        printf("%s\n",ft_strnstr(a,"l",3));
			printf("%s",strnstr(a,"l",3));


}
