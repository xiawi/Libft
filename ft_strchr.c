/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weyap <weyap@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 08:41:48 by weyap             #+#    #+#             */
/*   Updated: 2025/05/20 08:41:48 by weyap            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * ft_strchr - locate first occurrence of character in string
 *
 * params
 * 		s - the string to be searched
 * 		c - the character to be located
 *
 * variables
 * 		index - the number corresponding to an index in c
 * 		s_len - length of s
 *		t_c - an unsigned char casted copy of c
 *
 * return
 * 		address of the first occurrence of c in s if found, otherwise s'
 * 		terminating null byte.
 */
char	*ft_strchr(const char *s, int c)
{
	size_t	index;
	size_t	s_len;
	char	t_c;

	index = 0;
	s_len = ft_strlen(s);
	t_c = (char)c;
	while (index <= s_len)
	{
		if (s[index] == t_c)
			return ((char *)&s[index]);
		index++;
	}
	return (NULL);
}
