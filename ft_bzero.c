/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weyap <weyap@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 11:21:31 by weyap             #+#    #+#             */
/*   Updated: 2025/05/19 11:21:31 by weyap            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 *	ft_bzero - zero a byte string
 *
 *	params
 * 		s - the memory area to be zero-ed
 * 		n - number of bytes in memory area pointed to by s to be filled with 
 * 			'\0'
 *
 *	function calls
 * 		ft_memset - fills n bytes in s with '\0'
 */
void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}
