/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_atoi.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: naplouvi <naplouvi@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/08/01 18:37:47 by naplouvi     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/08 17:49:39 by naplouvi    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	size_t		i;
	size_t		nb;
	int			neg;

	i = 0;
	nb = 0;
	while (WHITESPACE(str[i]))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		neg = str[i] == '-' ? 1 : 0;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10 + str[i] - 48;
		i++;
	}
	return (neg == 1 ? -nb : nb);
}
