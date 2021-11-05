/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 11:21:14 by mnaqqad           #+#    #+#             */
/*   Updated: 2021/11/05 23:40:33 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
#include <stdio.h>

static int ft_len(char const *s,char const c)
{
    int i=0;
    int max = 0;
    int lenw = 0;
    while(s[i] != '\0')
    {
        if(s[i] != c)
        {
            lenw++;
            if(lenw > max)
            max=lenw;
        }
        else
        lenw=0;
     i++;   
    }
    return max;
}
char **ft_split(char const *s,char c)
{
    int i=0;
    int spl=0;
    int j=0;
    int k =0;
    int ind=0;
    while(s[i] != '\0')
    {
        if(s[i] == c)
        {
           spl++;
        }
        i++;
    }
    i=0;
    char **cpy=(char**)malloc(sizeof(char*)*spl);
    while(i < spl)
    {
        while(s[ind] != c)
        {
            k++;
        }
        ind=k+1;
        cpy[i]=(char*)malloc(sizeof(char)*k);
        k=0;
        while(s[j] != c)
        {
            cpy[i][k]=s[j];
            j++;
            k++;
        }
        i++;
        j++;
    }
   return cpy;
}
int main(void)
{
    char *s="hellooooooooooo worldrrrrrrr pppppppppppppppppppp oewew feewfhhhhh";
    char sp=' ';
   // char **x = ft_split(s,sp);
    int i = 0;int j = 0;
    /*while(x[i][j])
    {
        while(x[i][j])
        {
            printf("%c",x[i][j]);
            j++;
        }
        i++;
    }*/
    printf("%d \n",ft_len(s,' '));

}