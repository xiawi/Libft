/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weyap <weyap@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 07:12:05 by weyap             #+#    #+#             */
/*   Updated: 2025/05/22 07:12:05 by weyap            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 *	ft_substr - creates a substring from a string
 *
 *	params
 * 		s - the string from which the substring will be created
 * 		start - the start index of the substring in s
 * 		len - the maximum length of the substring
 *
 *	variables
 * 		substr - the substring
 *
 *	return
 *		returns substring on success, otherwise return NULL.
 *
 *	notes
 * 		
 */
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	size;

	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_calloc(1, sizeof(char)));
	else if (ft_strlen(&s[start]) > len)
		size = len + 1;
	else
		size = ft_strlen(&s[start]) + 1;
	substr = (char *)malloc(sizeof(char) * (size));
	if (substr)
		ft_strlcpy(substr, &s[start], size);
	return (substr);
}
