/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weyap <weyap@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 15:32:34 by weyap             #+#    #+#             */
/*   Updated: 2025/05/19 15:32:34 by weyap            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * ft_strlcat - size-bounded string copying and concatenation
 *
 * params
 * 		dst - the string buffer to be copied to
 * 		src - the string to be copied from
 * 		size - size of the buffer
 *
 * variables
 * 		index - a number corresponding to the index of the dst array
 * 
 * function calls
 * 		ft_strlen - to get the size of src and dst
 *
 * return
 * 		the length of the string the function tried to create (sum of both
 * 		string lengths, or in the case where no NUL is found in dest, the sum
 * 		of size and src length).
 */
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	index;

	index = 0;
	while (dst[index] && index < size)
		index++;
	if (index == size)
		return (size + ft_strlen(src));
	while (index < size - 1)
		dst[index++] = *src++;
	dst[index] = '\0';
	return (ft_strlen(src) + ft_strlen(dst));
}
