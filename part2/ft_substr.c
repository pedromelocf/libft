#include "libft.h"

char *ft_substr(char const *s, unsigned int start,size_t len)
{
	char *substring;
	size_t counter;
	size_t s_len;

	counter = 0;
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (malloc(1));
	if (len > s_len - start)
		len = s_len - start;
	substring = malloc(sizeof(char) * (len  + 1));
	if (substring == NULL)
		return (NULL);
	while(counter < len)
	{
		substring[counter] = s[start + counter];
		counter++;
	}
	substring[counter] = '\0';
	return (substring);
}
