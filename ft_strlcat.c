/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weyap <weyap@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 15:32:34 by weyap             #+#    #+#             */
/*   Updated: 2025/05/19 15:32:34 by weyap            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int	index;

	index = 0;
	while (dst[index])
		index++;
	if (index > size - 1)
		return (ft_strlen(src) + index);
}

int	main()
{
	char	dest[20];

	ft_strlcat(dest, "test", 30);
}
