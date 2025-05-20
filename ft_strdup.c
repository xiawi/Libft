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

char	*ft_strdup(const char *s)
{
	char	*copy;
	int		index;

	copy = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	index = 0;
	while (s[index++])
		copy[index] = s[index];
	copy[index] = 0;
	return (copy);
}
