/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weyap <weyap@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 10:25:42 by weyap             #+#    #+#             */
/*   Updated: 2025/05/21 17:33:20 by weyap            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * ft_strnstr - locate a substring in a string
 *
 * params
 * 		big - the string to be searched
 * 		little - the substring to find
 * 		len - the length of characters to be searched
 *
 * variables
 * 		big_size - length of big
 * 		little_size - size of little
 * 		index - number corresponding to a character's index in big
 *
 * function call
 * 		ft_strlen - gets lengths of big and little
 * 		ft_strncmp - to check if little is found in big
 *
 * return
 * 		a pointer to the first occurrence of little in big if available,
 * 		otherwise return NULL.
 */
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	little_size;
	size_t	index;

	little_size = ft_strlen(little);
	index = 0;
	if (!*little)
		return ((char *)big);
	while (index + little_size <= len && big[index])
	{
		if (!ft_strncmp(&big[index], little, little_size))
			return ((char *)&big[index]);
		index++;
	}
	return (NULL);
}
