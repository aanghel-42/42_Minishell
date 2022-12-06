/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanghel <aanghel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 15:36:53 by pcatapan          #+#    #+#             */
/*   Updated: 2022/12/05 17:03:15 by aanghel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/minishell.h"

/**
 * @brief Search a char in string
 * 
 * @param s string in to search
 * @param c char to find in string
 * @return 1 if find char, 0 if not find
 */
int	ft_strchr(const char *s, int c)
{
	size_t	i;
	char	let;

	i = 0;
	let = c;
	while (s[i] != let && s[i] != '\0')
		i++;
	if (s[i] == let)
		return (1);
	return (0);
}

int	ft_strchr_until(const char *s, int c)
{
	size_t	i;
	char	let;

	i = 0;
	let = c;
	while (s[i] != let && s[i] != '\0')
		i++;
	if (s[i] == let)
		return (i);
	return (0);
}
