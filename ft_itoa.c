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

int	getlen(int n);
int	ft_abs(int n);

char	*ft_itoa(int n)
{
	char	*str;
	int		index;

	if (n == 0)
		return (ft_strdup("0"));
	index = getlen(n);
	str = (char *)malloc(sizeof(char) * (index + 1));
	if (str)
	{
		str[index--] = 0;
		if (n < 0)
			str[0] = '-';
		while (n)
		{
			str[index--] = ft_abs(n % 10) + '0';
			n /= 10;
		}
	}
	return (str);
}

int	getlen(int n)
{
	int	len;

	len = 0;
	if (n < 0)
		len++;
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

int	ft_abs(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}
