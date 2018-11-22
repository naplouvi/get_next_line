/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strsplit.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: naplouvi <naplouvi@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/02 12:33:50 by naplouvi     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/08 14:33:12 by naplouvi    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

static char	**ft_strsplit_check(char const *s, char c, int i, int j)
{
	char	**tab;
	int		k;

	if ((tab = malloc(sizeof(char*) * (ft_count_words(s, c) + 1))) == NULL)
		return (NULL);
	while (s[i])
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		if (s[i])
		{
			k = 0;
			if ((tab[j] = (char*)malloc(sizeof(char) * ft_word_len(s, i, c)
				+ 1)) == NULL)
				return (NULL);
			while (s[i] != c && s[i] != '\0')
				tab[j][k++] = s[i++];
			tab[j][k++] = '\0';
			j++;
		}
	}
	tab[j] = NULL;
	return (tab);
}

char		**ft_strsplit(char const *s, char c)
{
	int i;
	int j;

	i = 0;
	j = 0;
	return (s != NULL && c != '\0' ? ft_strsplit_check(s, c, i, j) : NULL);
}
