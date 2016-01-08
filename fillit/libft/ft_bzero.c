/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjarraya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 11:51:07 by mjarraya          #+#    #+#             */
/*   Updated: 2015/12/02 13:13:45 by mjarraya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	ft_bzero(void *s, size_t n)
{
	char	*b;
	size_t	i;

	i = 0;
	b = (char *)s;
	while (i < n)
	{
		b[i] = '\0';
		i++;
	}
}