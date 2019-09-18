/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgamora <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 20:10:41 by cgamora           #+#    #+#             */
/*   Updated: 2019/09/18 20:03:04 by cgamora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		st;
	int		e;
	int		i;
	char	*ptr;

	st = 0;
	i = 0;
	while (s[st] == ' ' || s[st] == '\n' || s[st] == '\t')
		st++;
	e = st;
	while (s[e] != '\0' && s[e] != '\n' && s[e] != '\t')
		e++;
	e--;
	while (s[e] == ' ')
		e--;
	ptr = (char*)malloc(((e - st) + 2));
	if (ptr == NULL)
		return (NULL);
	while (e != st - 1)
	{
		ptr[i] = s[st];
		i++;
		st++;
	}
	ptr[i] = '\0';
	return (ptr);
}
