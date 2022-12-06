/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_single_quote.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanghel <aanghel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 18:51:47 by pcatapan          #+#    #+#             */
/*   Updated: 2022/12/05 17:02:08 by aanghel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/minishell.h"

int	ft_check_single_quote(char *line, t_main *main, int i)
{
	if (line[i] == 39)
	{
		main->sin_quotes++;
		i++;
		while (line[i])
		{
			if (line[i] == 39)
			{
				main->sin_quotes++;
				break ;
			}
			i++;
		}
	}
	return (i);
}
