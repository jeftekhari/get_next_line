/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeftekha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/09 13:56:59 by jeftekha          #+#    #+#             */
/*   Updated: 2017/01/31 13:36:52 by jeftekha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*s1;
	int		l;
	int		i;

	i = -1;
	if (s == NULL)
		return (NULL);
	l = ft_strlen(s);
	while (s[l - 1] == ' ' || s[l - 1] == '\n' || s[l - 1] == '\t')
		l--;
	while (s[++i] == ' ' || s[i] == '\n' || s[i] == '\t')
		l--;
	if (l < 0)
		l = 0;
	if (!(s1 = ft_memalloc(l + 1)))
		return (NULL);
	s += i;
	i = -1;
	while (++i < l)
		s1[i] = *s++;
	s1[i] = '\0';
	return (s1);
}
