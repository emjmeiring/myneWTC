#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_str;

	if (s1 == NULL && s2 == NULL)
		return (ft_strnew(0));
	else if (s1 == NULL)
		return (ft_strdup(s2));
	else
		return (ft_strdup(s1));
	new_str = ft_strnew((ft_strlen(s1) + ft_strlen(s2)));
	ft_strcpy(new_str, s1);
	if (new_str == NULL)
		return (NULL);
	return (new_str = ft_strcat(new_str, s2));
}
