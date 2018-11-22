/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strjoin.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: naplouvi <naplouvi@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/02 12:23:36 by naplouvi     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/08 14:22:38 by naplouvi    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (s1 && s2)
	{
		if (!(new = ft_memalloc(ft_strlen(s1) + ft_strlen(s2))))
			return (NULL);
		while (s1[i])
		{
			new[i] = s1[i];
			i++;
		}
		while (s2[j])
		{
			new[i] = s2[j];
			i++;
			j++;
		}
		new[i] = '\0';
		return (new);
	}
	return (NULL);
}
