/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weyap <weyap@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 08:57:44 by weyap             #+#    #+#             */
/*   Updated: 2025/05/20 08:57:44 by weyap            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 *	ft_strncmp - compare two strings up to n bytes
 *
 *	params
 * 		s1, s2 - strings to be compared
 * 		n - number of bytes to check for comparison
 *
 *	variables
 * 		index - number corresponding to an index of both t_s1 and t_s2
 * 		t_s1, t_s2 - unsigned char pointer casted copies of both s1 and s2.
 *
 *	return
 * 		if a difference is found, return the difference between the two
 * 		characters, else return 0.
 */
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			index;
	unsigned char	*t_s1;
	unsigned char	*t_s2;

	index = 0;
	t_s1 = (unsigned char *)s1;
	t_s2 = (unsigned char *)s2;
	while ((index < n) && (t_s1[index] || t_s2[index]))
	{
		if (t_s1[index] != t_s2[index])
			return (t_s1[index] - t_s2[index]);
		index++;
	}
	return (0);
}
