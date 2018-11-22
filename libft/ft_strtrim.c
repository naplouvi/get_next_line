/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strtrim.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: naplouvi <naplouvi@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/02 19:04:01 by naplouvi     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/08 15:08:24 by naplouvi    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	i;
	size_t	j;
	char	*dst;

	i = 0;
	if (s != NULL)
	{
		while (WHITESPACE(s[i]))
			i++;
		if (s[i] == '\0')
			return (ft_strnew(0));
		j = ft_strlen(s) - 1;
		while (WHITESPACE(s[j]))
			j--;
		dst = ft_strsub(s, i, j - i + 1);
		return (dst);
	}
	return (NULL);
}
