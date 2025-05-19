/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weyap <weyap@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 09:42:52 by weyap             #+#    #+#             */
/*   Updated: 2025/05/19 09:42:52 by weyap            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * ft_isprint - checks if an unsigned char passed is printable
 *
 * params
 * 		int	c - the unsigned char to be tested
 * 
 * returns
 * 		1 - if c is printable
 * 		0 - otherwise
 *
 * notes
 * 	ASCII code 0 - 31 and 127 are non-printable. 
 */
int	ft_isprint(int c)
{
	if (c > 31 && c < 127)
		return (1);
	return (0);
}
