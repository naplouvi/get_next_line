/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_itoa.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: naplouvi <naplouvi@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/02 15:24:52 by naplouvi     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/08 14:22:37 by naplouvi    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	int		size;
	int		neg;
	int		tmp;
	char	*str;

	size = 1;
	neg = n < 0 ? 1 : 0;
	tmp = n;
	while ((tmp /= 10))
		size++;
	if (!(str = ft_strnew(size + neg)))
		return (NULL);
	if (neg == 1)
		str[0] = '-';
	while (size--)
	{
		str[size + neg] = (neg == 1 ? -(n % 10) : (n % 10)) + '0';
		n /= 10;
	}
	return (str);
}
