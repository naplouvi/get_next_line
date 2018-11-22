/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strnew.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: naplouvi <naplouvi@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/01 17:20:15 by naplouvi     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/08 14:22:38 by naplouvi    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*str;
	char	*p;

	str = (char*)malloc((size + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	p = str;
	while (size)
	{
		*p++ = '\0';
		size--;
	}
	*p = '\0';
	return (str);
}
