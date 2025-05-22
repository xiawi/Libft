/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weyap <weyap@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 10:28:19 by weyap             #+#    #+#             */
/*   Updated: 2025/05/19 10:28:19 by weyap            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 *	ft_strlen - calculates the length of a string
 *
 *	params
 * 		s - the string that we want to calculate the length of
 *
 *	variables
 * 		len - the length calculated
 *
 *	return
 * 		len
 *
 *	notes
 * 		we iterate through string until we reach NULL (\0), incrementing len
 * 		at each iteration.
 *
 * 		if s is an empty string, it will not enter the while loop.
 */
size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (*s++)
		len++;
	return (len);
}
