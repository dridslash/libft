/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 13:19:39 by mnaqqad           #+#    #+#             */
/*   Updated: 2021/11/04 12:08:03 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>
#include <string.h>
size_t   ft_strlcat(char * dest,const char *src,size_t dstsize)
{
    size_t    lend;
    size_t    lens;
    size_t    i;

    lend = ft_strlen(dest);
    lens = ft_strlen(src);
    i = 0;
    if (dstsize == 0)
    {
        return (lens);
    }
	if(dstsize >  lens)
	{
    while (src[i] && i < (dstsize - lend - 1))
    {
        dest[lend + i] = src[i];
        i++;
    }
    dest[lend + i] = '\0';
	}
    if (dstsize >= lend)
    {
        return (lend + lens);
    }
    return (dstsize + lens);
}
int main()
{
    char dest[20] = "hello";
    char src[20] = "world";
	char dest2[20]="hello";
	char src2[20]="world";
    int x = ft_strlcat(dest,src,-3);
	int y=strlcat(dest2,src2,-3);
    printf("%d \n %s \n %s \n",x,dest,src);
	printf("%d \n %s \n %s \n",y,dest2,src2);

}
