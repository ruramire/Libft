/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruramire <ruramire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 11:59:06 by ruramire          #+#    #+#             */
/*   Updated: 2022/04/13 17:46:20 by ruramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void			*str;
	size_t			length;

	length = count * size;
	str = (void *)malloc (length);
	if (!str)
		return (NULL);
	ft_bzero(str, length);
	return (str);
}
