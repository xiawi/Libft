/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weyap <weyap@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 11:20:33 by weyap             #+#    #+#             */
/*   Updated: 2025/05/20 11:20:33 by weyap            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_overflowing(size_t nmemb, size_t size);

/*
 * ft_calloc - allocate dynamic memory and fills it with 0
 *
 * params
 * 		nmemb - number of elements to allocate memory to
 * 		size - the size of each element
 *
 * variables
 * 		mem - the space in memory to return to caller
 *
 * function calls
 * 		is_overflowing - to check whether nmemb * size causes overflow
 * 		ft_bzero - fills allocated memory with 0s
 *
 * return
 * 		the allocated memory on success
 * 		if nmemb or size is 0, return a single byte of freeable memory to 
 * 		caller
 * 		otherwise, return NULL
 */
void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*mem;

	if (nmemb * size == 0)
		return (malloc(1));
	if (is_overflowing(nmemb, size))
		return (NULL);
	mem = (unsigned char *)malloc(nmemb * size);
	if (mem)
		ft_bzero(mem, nmemb * size);
	return ((void *)mem);
}

/*
 * is_overflowing - boolean function to check whether nmemb * size causes
 * 					overflow
 *
 * params
 * 		nmemb - number of elements to allocate memory to
 * 		size - the size of an element
 *
 * variables
 * 		prod - the product of size and nmemb, used to check for overflow
 *
 * return
 * 		1 if overflow occurs
 * 		0 otherwise
 *
 * notes
 * 		to check for overflow, we see if prod divided by nmemb is equal
 * 		to size
 */
int	is_overflowing(size_t nmemb, size_t size)
{
	size_t	prod;

	prod = nmemb * size;
	if (prod / nmemb != size)
		return (1);
	return (0);
}
