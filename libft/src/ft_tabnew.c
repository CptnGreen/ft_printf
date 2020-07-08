/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slisandr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 22:11:53 by slisandr          #+#    #+#             */
/*   Updated: 2020/02/12 22:11:57 by slisandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		*ft_tabnew(size_t size)
{
	int		*tab;
	size_t	i;

	tab = (int *)ft_memalloc(sizeof(int) * size);
	if (tab)
	{
		i = 0;
		while (i < size)
			tab[i++] = 0;
		return (tab);
	}
	return (NULL);
}
