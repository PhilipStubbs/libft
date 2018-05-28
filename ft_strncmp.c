/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstubbs <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/17 08:14:19 by pstubbs           #+#    #+#             */
/*   Updated: 2018/05/17 08:14:20 by pstubbs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int i;

	i = 0;
	if (n == 0)
	{
		return (0);
	}
	while (i < (n - 1) && s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
	{
		i++;
		// printf("%d\n", i);
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}


// int	main()
// {

	
// 	printf("%d : %d \n",ft_strncmp("q", "a", 0)  ,strncmp("q", "a", 0));
// 	return(0);
// }