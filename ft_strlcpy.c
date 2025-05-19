/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weyap <weyap@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 13:54:56 by weyap             #+#    #+#             */
/*   Updated: 2025/05/19 13:54:56 by weyap            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * ft_strlcpy - size-bounded string copying
 *
 * params
 * 		dst - the string buffer to be copied to
 * 		src - the string to be copied from
 * 		size - size of the buffer
 *
 * variables
 * 		index - a number corresponding to the index of the dst and src arrays
 *
 * return
 * 		the length of the string the function tried to create (length of src)
 *
 * notes
 * 		copies src to dest up to size - 1.
 */
size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	int	index;

	index = 0;
	while (index < size - 1 && src[index])
	{
		dst[index] = src[index];
		index++;
	}
	dst[index] = '\0';
	return (ft_strlen(src));
}
