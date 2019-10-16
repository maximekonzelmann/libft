/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkonzelm <mkonzelm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 21:29:14 by mkonzelm          #+#    #+#             */
/*   Updated: 2019/10/14 21:40:16 by mkonzelm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char		**ft_strsplit(char const *s, char c)
{
	int		i;
	int		j;
	int		k;
	char	**tab;

	i = 0;
	k = -1;
	if (!s || !c)
		return (NULL);
	if (!(tab = (char **)malloc(sizeof(char *) * (ft_count_word(s, c)) + 1)))
		return (NULL);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		j = i;
		while (s[i] && (s[i] != c))
			i++;
		if (i > j)
			tab[++k] = ft_strndup(s + j, i - j);
	}
	tab[++k] = NULL;
	return (tab);
}
