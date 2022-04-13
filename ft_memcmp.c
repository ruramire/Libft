/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruramire <ruramire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 12:27:31 by ruramire          #+#    #+#             */
/*   Updated: 2022/04/13 17:45:23 by ruramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			index;
	unsigned char	*aux_s1;
	unsigned char	*aux_s2;

	aux_s1 = (unsigned char *) s1;
	aux_s2 = (unsigned char *) s2;
	index = 0;
	while (index < n)
	{
		if (aux_s1[index] != aux_s2[index])
			return (aux_s1[index] - aux_s2[index]);
		index++;
	}
	return (0);
}
