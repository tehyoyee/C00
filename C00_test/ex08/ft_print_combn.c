/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tehyoyee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 21:33:53 by tehyoyee          #+#    #+#             */
/*   Updated: 2021/09/14 21:33:57 by tehyoyee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
    write(1, &c, 1);
}

void	recursive(int *a, int i, int j, int n)
{
    if (i == n)
    {
		i = 0;
	
		while (i < n)
		{
			ft_putchar(a[i]);
			i++;
        }
		if (a[0] != 10 - n + 48)
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
		return;
    }

    while (j < 10)
    {
        a[i] = j + 48;
        recursive(a, i + 1, j + 1, n);
        j++;
    }
}

void	ft_print_combn(int n)
{
	int a[n];
    int i = 0;
    int j = 0;

	a[n] = ',';
	a[n + 1] = ' ';
    recursive(a, i, j, n);
}

int main(void)
{
    
    ft_print_combn(9);
}
