/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmanfred <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 13:24:20 by cmanfred          #+#    #+#             */
/*   Updated: 2018/11/29 22:51:19 by cmanfred         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

size_t	ft_strlcat(char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	check;

	check = ft_strlen(s2);
	i = 0;
	while (s1[i] != '\0')
		i++;
	if (n == 0)
		return (ft_strlen(s2));
	j = -1;
	while (i + (++j) < n - 1 && s2[j] != '\0')
		s1[i + j] = s2[j];
	if (i < n)
		s1[i + j] = '\0';
	if (n <= i + j)
		return (n + ft_strlen(s2));
	else
		return (i + ft_strlen(s2));
}
