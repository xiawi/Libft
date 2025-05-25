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
 *	ft_strrchr - locate the last occurrence of character in string
 *
 *	parameters
 * 		s - the string to be searched
 * 		c - the character to be located
 *
 *	variables
 * 		index - a number corresponding to the index of a character in `s`
 *
 *	return
 * 		address of the last occurrence of `c` in `s` if found, otherwise NULL
 */
char	*ft_strrchr(const char *s, int c)
{
	long	index;

	index = ft_strlen(s);
	while (index >= 0)
	{
		if (s[index] == (char)c)
			return ((char *)&s[index]);
		index--;
	}
	return (NULL);
}
