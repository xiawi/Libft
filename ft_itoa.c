/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weyap <weyap@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 13:25:26 by weyap             #+#    #+#             */
/*   Updated: 2025/05/22 13:25:26 by weyap            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	str[12];
	int		index;
	long	t_n;

	str[11] = '\0';
	if (!n)
	{
		str[10] = '0';
		return (ft_strdup(&str[10]));
	}
	t_n = (long)n;
	if (t_n < 0)
		t_n *= -1;
	index = 10;
	while (t_n)
	{
		str[index--] = t_n % 10 + '0';
		t_n /= 10;
	}
	if (n < 0)
	{
		str[index] = '-';
		return (ft_strdup(&str[index]));
	}
	return (ft_strdup(&str[index + 1]));
}
