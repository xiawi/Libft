/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weyap <weyap@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 11:33:19 by weyap             #+#    #+#             */
/*   Updated: 2025/05/19 11:33:19 by weyap            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 *	ft_memcpy - copy memory area
 *
 *	params
 * 		dest - the memory address to be copied to
 * 		src - the memory address to be copied from
 * 		n - number of bytes to copy from src to dest
 *
 *	variables
 * 		t_dest - char pointer casted copy of dest
 * 		t_src - char pointer casted copy of src
 *
 *	return
 * 		the edited dest
 *
 *	notes
 * 		if dest and src address are the same, or if n = 0, simply return
 * 		dest.
 *		increments through n bytes of dest, copying the corresponding byte
 *		from src.
 */
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*t_dest;
	const char	*t_src;

	if (dest == src || n == 0)
		return (dest);
	t_dest = (char *) dest;
	t_src = (const char *) src;
	while (n--)
		*t_dest++ = *t_src++;
	return (dest);
}
