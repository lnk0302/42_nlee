#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *s)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char *ft_strdup(char *s, int n)
{
	char *ret;
	int i;

	i = 0;
	if (!(ret = (char *)malloc(sizeof(char) * (n + 1))))
		return (NULL);
	while (s[i] && i < n)
	{
		ret[i] = s[i];
		i++;
	}
	ret[i] = 0;
	return (ret);
}

char *ft_strchr(char *s, int c)
{
	int i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (s + i);
		i++;
	}
	if (s[i] == c)
		return (s + i);
	return (NULL);
}

char *ft_strjoin(char *s1, char *s2)
{
	char *ret;
	int i;
	int s1len;
	int s2len;

	i = 0;
	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	if (!(ret = (char *)malloc(sizeof(char) * (s1len + s2len + 1))))
		return (NULL);
	while (s1[i])
	{
		ret[i] = s1[i];
		i++;
	}
	while (s2[i - s1len])
	{
		ret[i] = s2[i - s1len];
		i++;
	}
	ret[i] = 0;
	return (ret);
}

int get_next_line(char **line)
{
	static char *data;
	char *temp;
	char *idx;
	char buff[2];
	int readlen;

	if (!data)
	{
		data = ft_strdup("", 0);
		while ((readlen = read(0, buff, 1)) > 0)
		{
			buff[readlen] = 0;
			temp = data;
			data = ft_strjoin(data, buff);
			free(temp);
		}
	}
	if ((idx = ft_strchr(data, '\n')))
	{
		*line = ft_strdup(data, idx - data);
		data = idx + 1;
		return (1);
	}
	*line = ft_strdup(data, ft_strlen(data));
	return (0);
}