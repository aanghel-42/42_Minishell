/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   priority.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanghel <aanghel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 19:44:36 by pcatapan          #+#    #+#             */
/*   Updated: 2022/12/05 17:00:33 by aanghel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../inc/minishell.h"

t_token	*ft_priority(t_token *token, int lvl, t_main *main)
{
	int		lstsize;

	lstsize = ft_lstsize_this(token);
	while (main->count <= lstsize)
	{
		if (token->priority != lvl)
			token = ft_priority(token, token->priority, main);
		if (ft_strchr(token->value[0], '=') && ft_check_envi(token->value[0]))
			token = ft_execute_enviroment(token, token->value[0]);
		else if (token->main->redirections)
			token = ft_redirections(token, token->main);
		else
			token = ft_execute_exeve(token, main);
		main->count++;
	}
	return (token);
}
