/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weyap <weyap@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 11:56:46 by weyap             #+#    #+#             */
/*   Updated: 2025/05/20 11:56:46 by weyap            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * ft_strdup - duplicate a string
 *
 * params
 * 		s - the string to duplicate
 *
 * variables
 * 		index - number corresponding to a character's index in copy
 * 		copy - the duplicated string
 *
 * function calls
 * 		ft_strlen - calculates the length of s
 *
 * return
 * 		copy
 */
char	*ft_strdup(const char *s)
{
	int		index;
	char	*copy;

	index = 0;
	copy = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!copy)
		return (NULL);
	while (*s)
		copy[index++] = *s++;
	copy[index] = 0;
	return (copy);
}
