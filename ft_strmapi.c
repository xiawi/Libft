/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weyap <weyap@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 16:53:18 by weyap             #+#    #+#             */
/*   Updated: 2025/05/22 16:53:18 by weyap            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	int		index;

	if (!s)
		return (NULL);
	if (!f)
		return (ft_strdup(s));
	str = ft_strdup(s);
	if (str)
	{
		index = 0;
		while (str[index])
		{
			str[index] = f(index, str[index]);
			index++;
		}
	}
	return (str);
}
