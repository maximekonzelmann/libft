/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_word.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkonzelm <mkonzelm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 21:12:33 by mkonzelm          #+#    #+#             */
/*   Updated: 2019/10/15 21:08:00 by mkonzelm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_count_word(char const *s, char c)
{
	unsigned int	i;
	int				word;

	i = 0;
	word = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
			word++;
		while (s[i] && (s[i] != c))
			i++;
	}
	return (word);
}
