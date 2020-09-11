/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtaverne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/11 11:25:23 by gtaverne          #+#    #+#             */
/*   Updated: 2020/09/11 12:55:48 by gtaverne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_sort_int_tab(int *tab, int size);
void my_swap(int *a, int *b);

void	my_swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int len;
	int iter;
	int max[2];

	len = size - 1;
	while (len > 0)
	{
		max[0] = len;
		max[1] = *(tab + len);
		iter = len - 1;
		while (iter >= 0)
		{
			if (max[1] < tab[iter])
			{
				max[0] = iter;
				max[1] = tab[iter];
			}
			my_swap((tab + len), (tab + max[0]));
			iter--;
		}
		len--;
	}
}
