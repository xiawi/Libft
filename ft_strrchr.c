/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weyap <weyap@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 08:43:53 by weyap             #+#    #+#             */
/*   Updated: 2025/05/20 08:43:53 by weyap            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * ft_strrchr - locate the last occurrence of character in string
 *
 * params
 * 		s - the string to be searched
 * 		c - the character to be located
 *
 * variables
 * 		index - a number corresponding to the index of a character in s
 * 		t_c - a char casted copy of c
 *
 * return
 * 		address of the last occurrence of c in s if found, otherwise s'
 * 		terminating null byte.
 *
 * notes
 * 		latest is set to -1 as that is outside the bounds of search.
 * 		the whole string is looped through once, with latest being updated
 * 		whenever c is found.
 */
char	*ft_strrchr(const char *s, int c)
{
	long	index;
	char	t_c;

	index = ft_strlen(s);
	t_c = (char)c;
	while (index >= 0)
	{
		if (s[index] == t_c)
			return ((char *)&s[index]);
		index--;
	}
	return (NULL);
}
