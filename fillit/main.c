/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjarraya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/20 21:05:16 by mjarraya          #+#    #+#             */
/*   Updated: 2015/12/21 13:29:14 by mjarraya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"

int	ft_verif(char *read)
{
	char	*split;

	if (!(split = ft_split(ft_read(read))))
		return (0);
	if (ft_validmap(split) == 0)
		return (0);
	return (1);
}

int		main(int argc, char **argv)
{
	
	if (argc != 2 || ft_verif(argv[1]) == 0)
	{
		ft_putstr("error\n");
		return (0);
	}
	ft_fill(argv[1]);
	return (0);
}
