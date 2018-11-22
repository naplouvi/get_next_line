/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strrev.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: naplouvi <naplouvi@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/05 14:46:43 by naplouvi     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/08 17:24:19 by naplouvi    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *str)
{
	int		i;
	int		j;
	char	temp;

	i = 0;
	j = 0;
	while (str[i + 1] != '\0')
		i++;
	while (i > j)
	{
		temp = str[j];
		str[j] = str[i];
		str[i] = temp;
		i--;
		j++;
	}
	return (str);
}
