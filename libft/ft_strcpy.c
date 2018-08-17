/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstubbs <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/17 07:59:49 by pstubbs           #+#    #+#             */
/*   Updated: 2018/05/17 07:59:50 by pstubbs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strcpy(char *dest, const char *src)
{
	char	*p1;
	int		i;

	p1 = (char*)src;
	i = 0;
	while (p1[i] != '\0')
	{
		dest[i] = p1[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
