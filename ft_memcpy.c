/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruramire <ruramire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 16:36:33 by ruramire          #+#    #+#             */
/*   Updated: 2022/04/13 17:45:26 by ruramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void	*dst, const void	*src, size_t n)
{
	void	*dst_aux;

	dst_aux = dst;
	if (dst || src)
	{
		while (n--)
			*((unsigned char *)dst++) = *((unsigned char *)src++);
		return (dst_aux);
	}
	return (NULL);
}
