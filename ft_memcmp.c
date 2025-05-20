/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weyap <weyap@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 10:22:34 by weyap             #+#    #+#             */
/*   Updated: 2025/05/20 10:22:34 by weyap            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*t_s1;
	unsigned char	*t_s2;

	t_s1 = (unsigned char *) s1;
	t_s2 = (unsigned char *) s2;
	while (n--)
		if (*t_s1 != *t_s2)
			return (s1 - s2);
	return (0);
}
