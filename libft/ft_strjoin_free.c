#include "libft.h"

char	*ft_strjoin_free(char *s1, char *s2, int size)
{
	size_t	i;
	size_t	j;
	char	*ptr;

	i = 0;
	j = 0;
	if (s1)
		i = ft_strlen(s1);
	if (s2)
		j = ft_strlen(s2);
	ptr = (char *)malloc(sizeof(*ptr) * (i + j + 1));
	ft_memcpy(ptr, s1, i);
	ft_memcpy(ptr + i, s2, j);
	ptr[i + j] = '\0';
	free(s1);
	ft_bzero(s2, size + 1);
	return (ptr);
}
