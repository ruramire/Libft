/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruramire <ruramire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 12:58:47 by ruramire          #+#    #+#             */
/*   Updated: 2022/04/13 17:45:59 by ruramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char			*s2;
	unsigned int	length;
	unsigned char	ch;

	ch = (unsigned char)c;
	s2 = (char *) s;
	length = ft_strlen(s2);
	while (length)
	{
		if (s2[length] == ch)
			return (&s2[length]);
		length--;
	}
	if (s2[length] == ch)
		return (&s2[length]);
	return (0);
}
