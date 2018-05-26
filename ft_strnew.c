/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstubbs <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/17 08:07:14 by pstubbs           #+#    #+#             */
/*   Updated: 2018/05/17 08:07:32 by pstubbs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *p;

	if (size == 0)
	{
		return (p = NULL);
	}
	p = (char*)malloc(size + 1);
	if (p == NULL)
		return (NULL);
	ft_memset(p, '\0', size + 1);
	return (p);
}
