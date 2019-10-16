/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intmaxt_toa_base.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hberger <hberger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 17:09:36 by hberger           #+#    #+#             */
/*   Updated: 2019/10/16 18:15:57 by hberger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

char *ft_intmaxt_toa_base(char *base, intmax_t n)
{
  int neg;
  int size;
  char *str;
  intmax_t nb;

  nb = n;
  if (nb == -2147483648 || nb == 0)
		return (nb == 0) ? ft_strdup("0") : ft_strdup("-2147483648");
  size = 0;
  while (nb)
  {
    nb = nb / (int)ft_strlen(base); // ATTENTION : sans cast, boucle infinie si nb est < 0
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
