/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weyap <weyap@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 09:13:51 by weyap             #+#    #+#             */
/*   Updated: 2025/05/22 09:13:51 by weyap            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	countwords(char const *s, char c);
static int	delimitedlen(char const *s, char c);
static void	*godfree(char **arr, int size);

char	**ft_split(char const *s, char c)
{
	int		word_count;
	char	**arr;
	int		index;
	int		str_len;
	char	*delimited;

	word_count = countwords(s, c);
	arr = (char **)malloc(sizeof(char *) * (word_count + 1));
	if (arr)
	{
		index = 0;
		while (word_count--)
		{
			while (*s == c)
				s++;
			str_len = delimitedlen(s, c);
			delimited = ft_substr(s, 0, str_len);
			if (!delimited)
				return (godfree(arr, index + 1));
			arr[index++] = delimited;
			s += str_len;
		}
		arr[index] = NULL;
	}
	return (arr);
}

static int	countwords(char const *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s != c && *s)
		{
			count++;
			s += delimitedlen(s, c);
		}
	}
	return (count);
}

static int	delimitedlen(char const *s, char c)
{
	int	len;

	len = 0;
	while (*s != c && *s)
	{
		len++;
		s++;
	}
	return (len);
}

static void	*godfree(char **arr, int size)
{
	int	index;

	index = 0;
	while (index < size)
		free(arr[index++]);
	free(arr);
	return (NULL);
}

/*
#include <stdio.h>

int	main(void)
{
	int	index = 0;
	char **split = ft_split("  tripouille  42  ", ' ');

	while (split[index])
	{
		printf("%s\n", split[index]);
		free(split[index]);
		index++;
	}
	free(split);
}
*/
