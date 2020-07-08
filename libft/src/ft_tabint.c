/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabint.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slisandr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 22:11:37 by slisandr          #+#    #+#             */
/*   Updated: 2020/02/12 22:11:40 by slisandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Similar to ft_strchr() but for ints
*/

#include "libft.h"

int		*ft_tabint(int const *ptr, size_t size, int c)
{
	int		*tab;
	size_t	i;

	tab = (int *)ptr;
	i = 0;
	while (tab[i] != c)
	{
		if (i >= size)
			return (NULL);
		i += 1;
	}
	return (tab);
}
