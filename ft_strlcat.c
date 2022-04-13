/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruramire <ruramire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 12:56:19 by ruramire          #+#    #+#             */
/*   Updated: 2022/04/13 17:45:48 by ruramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	length_dest;
	size_t	length_src;

	length_src = ft_strlen(src);
	length_dest = ft_strlen(dest);
	i = 0;
	if (dstsize < 1 || dstsize <= length_dest)
		return (length_src + dstsize);
	while (src[i] && (i < (dstsize - length_dest - 1)))
	{
		dest[i + length_dest] = src[i];
		i++;
	}
	dest[i + length_dest] = '\0';
	return (length_src + length_dest);
}
