/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weyap <weyap@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 05:33:21 by weyap             #+#    #+#             */
/*   Updated: 2025/05/20 05:40:05 by weyap            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <ctype.h>
#include <stdio.h>

int	main(void)
{
	printf("Testing ft_isalpha with c = 'z'...\n");
	printf("isalpha output:\t\t%d\n", isalpha('z'));
	printf("ft_isalpha output:\t%d\n", ft_isalpha('z'));
}
