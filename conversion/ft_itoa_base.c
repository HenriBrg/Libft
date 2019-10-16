/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hberger <hberger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 16:51:04 by hberger           #+#    #+#             */
/*   Updated: 2019/10/16 16:51:15 by hberger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

char *ft_itoa_base(char *base, int n)
{
  int nb;
  int neg;
  int size;
  char *str;

  nb = n;
  if (nb == -2147483648 || nb == 0)
		return (nb == 0) ? ft_strdup("0") : ft_strdup("-2147483648");
  size = 0;
  while (nb)
  {
    nb = nb / (int)ft_strlen(base);
    size++;
  }
  if (n < 0 && size++ && (neg = 1))
		n *= -1;
  if ((str = (char*)malloc(sizeof(char) * (size + 1))) == NULL)
		return (NULL);
  if (neg == 1)
			str[0] = '-';
  str[size--] = '\0';
  while (n)
  {
    str[size--] = base[n % ft_strlen(base)];
    n = n / ft_strlen(base);
  }
  return (str);
}
