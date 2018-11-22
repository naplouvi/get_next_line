/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_word_len.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: naplouvi <naplouvi@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/05 13:27:41 by naplouvi     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/08 14:22:38 by naplouvi    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

int		ft_word_len(char const *str, int index, char c)
{
	int	i;

	i = 0;
	while (str[index] != c && str[index])
	{
		index++;
		i++;
	}
	return (i);
}
