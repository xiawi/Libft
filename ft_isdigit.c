/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weyap <weyap@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 08:40:32 by weyap             #+#    #+#             */
/*   Updated: 2025/05/19 08:40:32 by weyap            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 *	ft_isdigit - checks if an unsigned char passed in is a digit
 *
 *	params
 * 		int	c - the unsigned char to be tested
 * 
 *	returns
 * 		1 - if c is a digit
 * 		0 - otherwise
 */
int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
