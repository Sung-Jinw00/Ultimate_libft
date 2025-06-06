/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:33:55 by locagnio          #+#    #+#             */
/*   Updated: 2025/04/23 00:48:22 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief
 * Erase and copy dsize of src in dst.
 * 
 * @param dst the string that will be modified.
 * @param src the string that will be copied in dst.
 * @param dsize the number of characters that will be replaced
 * 
 * @returns
 * The len of src.
*/

char	*ft_strncpy(char *dst, const char *src, size_t n)
{
	int	i;

	if (!src)
		return (NULL);
	i = -1;
	while (src[++i] && i < (int)n)
		dst[i] = src[i];
	dst[i] = '\0';
	return (dst);
}

/* #include <stdio.h>

int	main(void)
{
	char dst[14];
	char src[] = "Hello World.";

	printf("%zu\n", ft_strlcpy(dst, src, 15));
	printf("%s\n", dst);
	return(0);
} */