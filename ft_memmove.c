/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weyap <weyap@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 11:39:29 by weyap             #+#    #+#             */
/*   Updated: 2025/05/19 11:39:29 by weyap            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * ft_memmove - copy memory area (safer than ft_memcpy)
 *
 * params
 * 		dest - the memory address to be copied to
 * 		src - the memory address to be copied from
 * 		n - number of bytes to copy from src to dest
 *
 * variables
 * 		t_dest - char pointer casted copy of dest
 * 		t_src - char pointer casted copy of src
 *
 * function calls
 * 		ft_memcpy - when dest < src, we want it to copy as per usual
 *
 * return
 * 		the edited dest
 *
 */
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*t_dest;
	const char	*t_src;

	if (dest == src || n == 0)
		return (dest);
	if (dest < src)
		ft_memcpy(dest, src, n);
	else
	{
		t_dest = (char *) dest;
		t_src = (char *) src;
		t_dest += n - 1;
		t_src += n - 1;
		while (n)
		{
			*t_dest-- = *t_src--;
			n--;
		}
	}
	return (dest);
}
