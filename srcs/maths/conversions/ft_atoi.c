/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:32:27 by locagnio          #+#    #+#             */
/*   Updated: 2025/04/29 01:02:51 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief
 * Transform a number in a string into an int.
 * 
 * @returns
 * - If nptr = NULL, or if the casual requirements of
 * atoi aren't respected, the function returns 0.*/
/**
 * - Else, it returns the integer version of a string of numbers.
*/
int	ft_atoi(char *nptr)
{
	int		i;
	int		sign;
	long	result;

	i = 0;
	sign = 1;
	result = 0;
	while (nptr[i] == ' ' || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
		if (nptr[i++] == '-')
			sign = -sign;
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		result = result * 10 + nptr[i++] - '0';
		if (result > INT_MAX)
		{
			ft_write(2, "ft_atoi : nb out of the limits of an int\n");
			return (0);
		}
	}
	return (result * sign);
}

/* #include <stdio.h>

int	main(void)
{
	const char nptr[] = "   +1234ab567";

	printf("%d\n", ft_atoi(nptr));
	return(0);

} */