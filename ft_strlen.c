/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybolles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 15:49:24 by ybolles           #+#    #+#             */
/*   Updated: 2018/10/04 15:09:30 by ybolles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int compte;

	compte = 0;
	while (str[compte] != '\0')
	{
		compte++;
	}
	return (compte);
}
