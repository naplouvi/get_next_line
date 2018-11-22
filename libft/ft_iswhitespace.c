/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_iswhitespace.c                                .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: naplouvi <naplouvi@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/08 14:40:15 by naplouvi     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/08 14:43:40 by naplouvi    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

int	ft_iswhitespace(char c)
{
	return (c == ' ' || c == '\t' || c == '\n' || c == '\r' || c == '\v' ||
	c == '\f' ? 1 : 0);
}
