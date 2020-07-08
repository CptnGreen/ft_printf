/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slisandr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/15 04:43:07 by slisandr          #+#    #+#             */
/*   Updated: 2020/02/26 12:11:56 by slisandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		get_len(int n)
{
	int		len;
	int		n_copy;

	len = 0;
	if (n == 0)
		len = 1;
	else
	{
		n_copy = ((n >= 0) ? (n) : (n * (-1)));
		while (n_copy > 0)
		{
			n_copy /= 10;
			len += 1;
		}
	}
	return (len);
}

static void		get_array(char *str, int n, int len)
{
	int		i;
	int		n_copy;

	if (n < 0)
		str[0] = '-';
	n_copy = ((n >= 0) ? (n) : (n * (-1)));
	i = ((n < 0) ? (len + 2) : (len + 1)) - 2;
	while (n_copy > 0)
	{
		str[i] = n_copy % 10 + '0';
		n_copy /= 10;
		i--;
	}
}

char			*ft_itoa(int n)
{
	int		len;
	char	*str;

	len = get_len(n);
	str = (char *)malloc(sizeof(char) * ((n < 0) ? (len + 2) : (len + 1)));
	if (str)
	{
		str[((n < 0) ? (len + 2) : (len + 1)) - 1] = '\0';
		if (n == 0)
			str[0] = '0';
		else if (n == -2147483648)
			ft_strcpy(str, "-2147483648");
		else
			get_array(str, n, len);
		return (str);
	}
	else
		return (NULL);
}
