/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   get_next_line.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: naplouvi <naplouvi@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/08 11:54:59 by naplouvi     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/15 18:27:26 by naplouvi    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "get_next_line.h"

static unsigned int		ft_linelen(char *files)
{
	unsigned int i;

	i = 0;
	while (files[i] && files[i] != '\n')
		i++;
	return (i);
}

static char				*ft_strnjoin(char *s1, char *s2, size_t len)
{
	char	*str;
	size_t	n;
	size_t	i;
	size_t	j;

	j = 0;
	i = 0;
	n = ft_strlen(s1) + len + 1;
	str = ft_strnew(n);
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	len++;
	while (s2[j] != '\0' && --len > 0)
		str[i++] = s2[j++];
	str[i] = '\0';
	return (str);
}

static char				*ft_save_line(char *files)
{
	if (ft_strchr(files, '\n'))
	{
		ft_strcpy(files, ft_strchr(files, '\n') + 1);
		return (files);
	}
	else if (ft_linelen(files) > 0)
	{
		ft_strcpy(files, ft_strchr(files, '\0'));
		return (files);
	}
	return (NULL);
}

int						get_next_line(int const fd, char **line)
{
	char			*tmp;
	char			buf[BUFF_SIZE + 1];
	static char		*files[256];
	int				ret;

	if (fd < 0 || BUFF_SIZE < 1 || !line || read(fd, buf, 0) < 0)
		return (-1);
	if (!(files[fd]) && (files[fd] = ft_strnew(0)) == NULL)
		return (-1);
	while (!(ft_strchr(files[fd], '\n')) &&
	(ret = read(fd, buf, BUFF_SIZE)) > 0)
	{
		buf[ret] = '\0';
		tmp = files[fd];
		files[fd] = ft_strnjoin(tmp, buf, ret);
		free(tmp);
	}
	*line = ft_strsub(files[fd], 0, ft_linelen(files[fd]));
	if (ft_save_line(files[fd]) == NULL)
		return (0);
	return (1);
}
