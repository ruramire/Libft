/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruramire <ruramire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 12:27:09 by ruramire          #+#    #+#             */
/*   Updated: 2022/04/13 17:45:19 by ruramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void	*s, int c, size_t n)
{
	size_t			index;
	unsigned char	*aux_s;
	unsigned char	ch;

	ch = (unsigned char)c;
	aux_s = (unsigned char *)s;
	index = 0;
	while (index < n)
	{
		if (aux_s[index] == ch)
			return ((void *)aux_s + index);
		index++;
	}
	return (NULL);
}
