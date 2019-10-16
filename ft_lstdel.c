/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkonzelm <mkonzelm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 21:14:16 by mkonzelm          #+#    #+#             */
/*   Updated: 2019/10/14 21:31:39 by mkonzelm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *tmp;
	t_list *next;

	tmp = *alst;
	while (tmp != NULL)
	{
		next = tmp->next;
		del((tmp->content), (tmp->content_size));
		free(tmp);
		tmp = next;
	}
	*alst = NULL;
}
