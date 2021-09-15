/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taehykim <taehykim@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 12:00:47 by taehykim          #+#    #+#             */
/*   Updated: 2021/09/15 16:39:59 by taehykim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(char *a, char*b)
{
	write(1, a, 2);
	write(1, " ", 1);
	write(1, b, 2);
	if (!(a[0] == '9' && a[1] == '8'))
		write(1, ", ", 2);
}

void	ft_func(char *a, char *b)
{
	if (a[1] == '9')
	{
		b[1] = '0';
		b[0] = a[0] + 1;
	}
	else
	{
		b[0] = a[0];
		b[1] = a[1] + 1;
	}
	while (b[0] <= '9')
	{
		while (b[1] <= '9')
		{
			ft_print(a, b);
			b[1]++;
		}
		b[0]++;
		b[1] = '0';
	}
}

void	ft_print_comb2(void)
{
	char	a[2];
	char	b[2];

	a[0] = '0';
	a[1] = '0';
	while (a[0] <= '9')
	{
		while (a[1] <= '9')
		{
			ft_func(a, b);
			a[1]++;
		}
		a[0]++;
		a[1] = '0';
	}
}
