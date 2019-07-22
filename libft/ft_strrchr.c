/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvoor <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/15 15:06:55 by jvoor             #+#    #+#             */
/*   Updated: 2019/04/15 15:06:56 by jvoor            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned long	i;
	int				j;

	i = 0;
	j = 0;
	while (i < ft_strlen(s))
	{
		if (s[i] == c)
			j = i;
		i++;
	}
	if (c == '\0')
		return ((char *)(s + ft_strlen(s)));
	if (j == 0 && s[j] != c)
		return (0);
	return ((char *)s + j);
}
