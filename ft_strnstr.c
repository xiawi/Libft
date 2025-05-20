/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weyap <weyap@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 10:25:42 by weyap             #+#    #+#             */
/*   Updated: 2025/05/20 10:25:42 by weyap            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	little_size;
	size_t	little_index;
	size_t	index;

	little_size = ft_strlen(little);
	index = 0;
	while (index + little_size <= len)
	{
		little_index = 0;
		while (big[index + little_index] == little[little_index])
			little_index++;
		if (little_index == little_size)
			return ((char *)&big[index]);
		index++;
	}
	return (NULL);
}
