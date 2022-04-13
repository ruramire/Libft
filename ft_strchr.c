/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruramire <ruramire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 12:54:18 by ruramire          #+#    #+#             */
/*   Updated: 2022/04/13 17:45:42 by ruramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char			*s2;
	unsigned int	index;
	unsigned char	ch;

	ch = (unsigned char)c;
	s2 = (char *) s;
	index = 0;
	while (s2[index])
	{
		if (s2[index] == ch)
			return (&s2[index]);
		index++;
	}
	if (s2[index] == ch)
		return (&s2[index]);
	return (NULL);
}
