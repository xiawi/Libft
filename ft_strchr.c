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
 *		t_c - an unsigned char casted copy of c
 *
 * return
 * 		address of the first occurrence of c in s if found, otherwise s'
 * 		terminating null byte.
 */
char	*ft_strchr(const char *s, int c)
{
	unsigned char	t_c;

	t_c = (unsigned char) c;
	while (*s++)
		if (*s == t_c)
			return ((char *) s);
	return ((char *) s);
}
