/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strsub.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: naplouvi <naplouvi@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/02 12:17:26 by naplouvi     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/08 14:22:38 by naplouvi    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*new;
	size_t	i;

	i = 0;
	if (!(new = (char*)malloc(sizeof(char) * len + 1)))
		return (NULL);
	if (s)
	{
		while (i < len)
		{
			new[i] = s[start];
			start++;
			i++;
		}
	}
	new[i] = '\0';
	return (new);
}
