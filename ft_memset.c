//#include "libft.h"
#include <string.h>
#include <stdio.h>

void	*ft_memset(void *s,int c,size_t n)
{
	int k=0;
	char *ss=(char *)s;
	while(k < n)
	{
		ss[k]=c;
		k++;
	}
	return s;
}

int main(void)
{
	char s[50]="hello wolrd";
	ft_memset(s,'.',5);
	printf("%s",s);
}
