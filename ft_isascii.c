/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weyap <weyap@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 08:54:25 by weyap             #+#    #+#             */
/*   Updated: 2025/05/19 08:54:25 by weyap            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * ft_isascii - checks if an unsigned char passed in fits into the ASCII 
 * character set
 *
 * params
 * 		int	c - the unsigned char to be tested
 * 
 * returns
 * 		1 - if c fits into the ASCII character set
 * 		0 - otherwise
 *
 * notes
 * 	ASCII (not extended) only encompasses codes 0 to 127.
 */
int	ft_isascii(int c)
{
	if (c >= 0 && c < 128)
		return (1);
	return (0);
}
