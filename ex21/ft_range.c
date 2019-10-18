/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xtang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 21:19:09 by xtang             #+#    #+#             */
/*   Updated: 2019/10/17 16:01:56 by xtang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int *a;
	int i;

	if (min >= max)
		return (0);
	a = malloc((max - min) * sizeof(int));
	if (a == NULL)
		return (a);
	i = 0;
	while (min < max)
	{
		a[i++] = min;
		min++;
	}
	return (a);
}
