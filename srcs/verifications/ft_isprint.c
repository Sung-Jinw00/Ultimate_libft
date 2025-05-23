/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:33:03 by locagnio          #+#    #+#             */
/*   Updated: 2025/04/27 15:15:17 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @return
 * True if the argument is printable.
*/
bool	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}

/* #include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_isprint(127));
	return(0);
} */