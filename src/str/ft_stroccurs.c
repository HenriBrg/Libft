/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stroccurs.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henri <henri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 11:51:48 by henri             #+#    #+#             */
/*   Updated: 2019/12/17 00:11:14 by hberger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

int	ft_stroccurs(char *src, char c)
{
	int	i;
	int	x;

	x = 0;
	i = -1;
	while (src[++i] != '\0')
	{
		if (src[i] == c)
			x++;
	}
	return (x);
}