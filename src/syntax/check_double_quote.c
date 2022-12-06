/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_double_quote.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanghel <aanghel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 18:54:17 by pcatapan          #+#    #+#             */
/*   Updated: 2022/12/05 17:02:03 by aanghel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/minishell.h"

int	ft_check_double_quote(char *line, t_main *main, int i)
{
	if (line[i] == '"')
	{
		main->dub_quotes++;
		i++;
		while (line[i])
		{
			if (line[i] == '"' && line[i - 1] != 92)
			{
				main->dub_quotes++;
				break ;
			}
			i++;
		}
	}
	return (i);
}
