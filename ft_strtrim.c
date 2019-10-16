/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkonzelm <mkonzelm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 21:29:40 by mkonzelm          #+#    #+#             */
/*   Updated: 2019/10/14 21:40:21 by mkonzelm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*str;
	size_t	i;
	size_t	j;

	if (!s)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i] && ft_isspace(s[i]))
		i++;
	j = ft_strlen(&s[i]) - 1;
	while (s[i] && ft_isspace(s[j + i]))
		j--;
	if (!(str = ft_strnew(j + 1)))
		return (NULL);
	ft_strncpy(str, (s + i), (j + 1));
	return (str);
}
