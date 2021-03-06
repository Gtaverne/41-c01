/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtaverne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/11 09:40:17 by gtaverne          #+#    #+#             */
/*   Updated: 2020/09/11 12:49:38 by gtaverne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putstr(char *str);

void	ft_putstr(char *str)
{
	int le;

	le = 0;
	while (*(str + le) != 0)
	{
		write(1, (str + le), 1);
		le++;
	}
}
