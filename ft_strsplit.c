/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstubbs <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 08:30:35 by pstubbs           #+#    #+#             */
/*   Updated: 2018/05/22 08:30:39 by pstubbs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	void ft_proccessing(char const *s, char c, char **ret, int ti,int w)
{
	char	*temp;

	temp = (char*)malloc(ft_strlen(ft_strpull_idx(s, c, ti)));
	temp = ft_strpull_idx(s, c, ti);
	ret[w] = ft_strnew(ft_strlen(temp));
	ft_strcpy(ret[w], temp);
}

char	**ft_strsplit(char const *s, char c)
{
	int		words;
	int		i;
	char	**ret;
	int		tempint;

	if (!s || !c)
		return (NULL);
	i = 0;
	words = ft_strcount(s, c);
	tempint = 0;
	ret = (char**)malloc(words + 1);
	if (!ret)
		return (NULL);
	while (i < words)
	{	
		while (s[tempint] == c)
			tempint++;
		ft_proccessing(s, c, ret, tempint, i);
		while (s[tempint] != c)
			tempint++;
		i++;
	}
	return (ret);
}