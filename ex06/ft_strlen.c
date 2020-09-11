/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtaverne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/11 10:02:32 by gtaverne          #+#    #+#             */
/*   Updated: 2020/09/11 12:51:09 by gtaverne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strlen(char *str);

int	ft_strlen(char *str)
{
	int l;

	l = 0;
	while (*(str + l) != 0)
	{
		l++;
	}
	return (l);
}
