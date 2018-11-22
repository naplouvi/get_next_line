/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lst_last.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: naplouvi <naplouvi@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/05 13:39:43 by naplouvi     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/08 14:22:37 by naplouvi    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lst_last(t_list *begin_list)
{
	if (begin_list->next)
		return (ft_lst_last(begin_list->next));
	return (begin_list);
}
