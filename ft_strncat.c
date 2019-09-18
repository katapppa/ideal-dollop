/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgamora <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 20:22:18 by cgamora           #+#    #+#             */
/*   Updated: 2019/09/18 20:10:18 by cgamora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t i;
	size_t a;

	i = 0;
	a = 0;
	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[a] != '\0' && a < n)
	{
		s1[i] = s2[a];
		a++;
		i++;
	}
	s1[i] = '\0';
	return (s1);
}