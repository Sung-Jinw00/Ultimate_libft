/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_listdup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: locagnio <locagnio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 19:10:05 by locagnio          #+#    #+#             */
/*   Updated: 2025/04/19 20:48:04 by locagnio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief
 * Duplicates a chain list.
 * 
 * @return
 * The duplicate of src.
*/
t_list	*ft_listdup(t_list *src)
{
	t_list	*cpy;
	t_list	*tmp;
	int		i;

	tmp = src;
	cpy = NULL;
	i = 0;
	while (tmp)
	{
		cpy = add_at(cpy, tmp->data, i++);
		tmp = tmp->next;
	}
	return (cpy);
}
