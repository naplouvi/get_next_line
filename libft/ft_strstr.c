/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strstr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: naplouvi <naplouvi@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/08/01 15:56:32 by naplouvi     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/08 14:22:38 by naplouvi    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *str, const char *to_find)
{
	size_t		i;
	size_t		j;
	size_t		len;

	i = 0;
	j = 0;
	if (to_find[0] == '\0')
		return ((char*)str);
	len = ft_strlen((char*)to_find);
	while (str[i])
	{
		while (to_find[j] == str[i + j])
		{
			if (j == len - 1)
				return ((char*)str + i);
			j++;
		}
		j = 0;
		i++;
	}
	return (0);
}
