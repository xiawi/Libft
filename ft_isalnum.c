/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weyap <weyap@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 08:41:33 by weyap             #+#    #+#             */
/*   Updated: 2025/05/19 08:41:33 by weyap            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * ft_isalnum - checks if an unsigned char passed in is an alphanumeric 
 * character
 *
 * params
 * 		int	c - the unsigned char to be tested
 *
 * function calls
 * 		ft_isalpha - checks if c is alphabetical
 * 		ft_isdigit - checks if c is a digit
 * 
 * returns
 * 		1 - if c is alphanumeric
 * 		0 - otherwise
 */
int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	return (0);
}
