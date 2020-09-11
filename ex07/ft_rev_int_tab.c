/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtaverne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/11 10:08:27 by gtaverne          #+#    #+#             */
/*   Updated: 2020/09/11 11:03:25 by gtaverne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_rev_int_tab(int *tab, int size);

void	ft_rev_int_tab(int *tab, int size)
{
	int k;
	int temp;

	k = 0;
	while ( k < size / 2)
	{
		temp = *(tab + k);
		*(tab + k) = *(tab + size - 1 - k);
		*(tab + size - 1 - k ) = temp;
		k++;
	}

}
