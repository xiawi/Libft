/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weyap <weyap@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 18:47:09 by weyap             #+#    #+#             */
/*   Updated: 2025/05/22 18:47:09 by weyap            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	r_putnbr_fd(int n, int fd);

void	ft_putnbr_fd(int n, int fd)
{
	if (!n)
	{
		ft_putchar_fd('0', fd);
		return ;
	}
	r_putnbr_fd(n, fd);
}

static void	r_putnbr_fd(int n, int fd)
{
	if (n == 0)
		return ;
	else if (n < 0)
	{
		ft_putchar_fd('-', fd);
		r_putnbr_fd(n / -10, fd);
		ft_putchar_fd(-(n % 10) + '0', fd);
	}
	else
	{
		r_putnbr_fd(n / 10, fd);
		ft_putchar_fd((n % 10) + '0', fd);
	}
}
