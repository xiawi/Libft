/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weyap <weyap@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 11:20:33 by weyap             #+#    #+#             */
/*   Updated: 2025/05/20 11:20:33 by weyap            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	index;
	char	*res;

	if (nmemb * size == 0)
		return (NULL);
	index = 0;
	res = (char *)malloc(size * nmemb);
	while (index++ < size * nmemb)
		res[index] = 0;
	return ((void *)res);
}
