/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 16:53:39 by mnaqqad           #+#    #+#             */
/*   Updated: 2021/11/05 16:31:48 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
static int is_set(char s1,char const *set)
{
    char com=s1;
    int i=0;
    while(set[i] != '\0')
    {
        if(com == set[i])
        {
            return (1);
        }
        i++;
    }
  return (0);
}
char  *ft_strtrim(char const *s1,char const *set)
{
    size_t len=ft_strlen(s1);
    char *tr=(char*)malloc(sizeof(char)*len+1);
   if(tr == NULL)
        return (0);
    int pos=0;
    int i=0;
    while((s1[i] != ' ') || s1[i] != '\0')
    {
        if(is_set(s1[i],set))
            pos++;
        else
        break;
        i++;
    }
    i=0;
    while(pos < len)
    {
        tr[i]=s1[pos];
        i++;
        pos++;
    }
    i-=1;
    while(i > 0)
    {
        if(is_set(tr[i],set))
        {
           tr[i]='\0';
           i--;
        }
        else
        break;
    }
    return tr;
}
int main(void)
{
    char *s="hellooohelhh hkhlg hello";
    char *set="hello ";
    printf("%s \n", ft_strtrim(s,set));
    printf("%ld \n",ft_strlen(s));
}
