/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weyap <weyap@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 10:41:09 by weyap             #+#    #+#             */
/*   Updated: 2025/05/20 05:27:34 by weyap            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * ft_memset - fill memory with a constant byte
 *
 * params
 * 		s - the memory area to be filled
 * 		c - the constant byte to fill s with
 * 		n - number of bytes in memory area pointed to by s to be filled with c
 *
 * variables
 * 		t_s - char pointer casted s
 *
 * return
 * 		s after memory area has been filled
 *
 * notes
 * 		iterate through the first n bytes of s, setting the value at that index
 * 		to be c.
 */
void	*ft_memset(void *s, int c, size_t n)
{
	char	*t_s;

	t_s = (char *) s;
	while (n--)
		*t_s++ = c;
	return (s);
}
