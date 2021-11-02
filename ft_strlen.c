#include "libft.h"
#include <stdio.h>
size_t	ft_strlen(const char *s)
{
	size_t len=0;
	while(*s !='\0')
	{
		len++;
		s++;
	}
	return len;
}
