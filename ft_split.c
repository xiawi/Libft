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

static int	countdelimited(char const *s, char c);
static int	delimitedlen(char const *s, char c);
static void	*godfree(char **arr, int size);

/*
 *	ft_split - array of strings split by a delimiter from a string
 *
 *	parameters
 *		s - the string to be split
 *		c - the character delimiter
 *
 *	variables
 *		delimited_count - number of delimited strings in `s`
 *		arr - array of split strings
 *		index - index of `arr`
 *		str_len - length of a delimited string
 *		delimited - delimited string
 *
 *	return
 *		`arr` if no allocation fails, otherwise NULL
 */
char	**ft_split(char const *s, char c)
{
	int		delimited_count;
	char	**arr;
	int		index;
	int		str_len;
	char	*delimited;

	delimited_count = countdelimited(s, c);
	arr = (char **)malloc(sizeof(char *) * (delimited_count + 1));
	if (arr)
	{
		index = 0;
		while (delimited_count--)
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

/*
 *	countdelimited - counts number of delimited strings
 *
 *	parameters
 *		s - string to count the number of delimited strings
 *		c - the character delimiter
 *
 *	variables
 *		count - number of delimited strings in `s`
 *
 *	return
 *		`count`
 */
static int	countdelimited(char const *s, char c)
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

/*
 *	delimitedlen - calculates the length of a delimited string
 *
 *	parameters
 *		
 *
 *	variables
 *
 *	return
 */
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

/*
 *	godfree - frees everything
 *
 *	parameters
 *
 *	variables
 *
 *	return
 */
static void	*godfree(char **arr, int size)
{
	int	index;

	index = 0;
	while (index < size)
		free(arr[index++]);
	free(arr);
	return (NULL);
}
