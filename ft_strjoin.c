#include "ft_memalloc.c"
#include "ft_strlen.c"

char *ft_strjoin(char const *s1, char const *s2) {
    char *str;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	str = ft_memalloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!str)
		return (NULL);
	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		str[i + j] = s2[j];
		j++;
	}
	str[i + j] = '\0';
	return str;
}


int main() {

    char *str1 = "Hello";
    char *str2 = "world";

    char *res = ft_strjoin(str1, str2);

    printf("%s\n", res);

    return 0;
}