/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memchr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: naplouvi <naplouvi@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/08/20 20:42:43 by naplouvi     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/08 14:22:37 by naplouvi    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t len)
{
	const unsigned char	*test;

	test = s;
	while (len--)
	{
		if (*test++ == (unsigned char)c)
			return ((void*)--test);
	}
	return (NULL);
}
