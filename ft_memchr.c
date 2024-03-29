/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkonzelm <mkonzelm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 21:15:54 by mkonzelm          #+#    #+#             */
/*   Updated: 2019/10/14 21:31:57 by mkonzelm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*src;
	size_t	i;

	src = (char*)s;
	i = 0;
	while (i < n)
	{
		if ((unsigned char)src[i] == (unsigned char)c)
			return ((char*)s + i);
		i++;
	}
	return (NULL);
}
