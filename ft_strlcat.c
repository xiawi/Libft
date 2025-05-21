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
 * 		dst_len - the length of dst
 * 		src_len - the length of src
 * 
 * function calls
 * 		ft_strlen - to get the size of src and dst
 *
 * return
 * 		the length of the string the function tried to create (sum of both
 * 		string lengths, or in the case where no NUL is found in size bytes, the
 * 		sum of size and src length).
 */
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	index;
	size_t	dst_len;
	size_t	src_len;

	index = 0;
	dst_len = 0;
	src_len = ft_strlen(src);
	while (dst_len < size && dst[dst_len])
		dst_len++;
	if (dst_len == size)
		return (size + src_len);
	while (src[index] && dst_len + index < size - 1)
	{
		dst[dst_len + index] = src[index];
		index++;
	}
	dst[dst_len + index] = 0;
	return (dst_len + src_len);
}
