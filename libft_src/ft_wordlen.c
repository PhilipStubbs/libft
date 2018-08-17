/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wordlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstubbs <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 08:35:07 by pstubbs           #+#    #+#             */
/*   Updated: 2018/05/22 08:35:10 by pstubbs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	ft_wordlen(char const *s, char d)
{
	int		i;
	int		count;

	i = 0;
	count = 0;
	while (s[i] == d && s[i] != '\0')
		i++;
	while (s[i] != d && s[i] != '\0')
	{
		count++;
		i++;
	}
	return (count);
}
