/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_table.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anshimiy <anshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 16:24:00 by anshimiy          #+#    #+#             */
/*   Updated: 2023/05/16 15:02:55 by anshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/minishell.h"

void	ft_print_table(char **str, int new_line)
{
	int	i;
	int	size;

	i = 0;
	if (!str || !str[0])
		return ;
	size = ft_arr_size(str);
	while (str[i])
	{
		if (new_line >= 1)
			printf("%s\n", str[i]);
		else
		{
			if (i == 0)
				printf("%s", str[i]);
			else if (i == size - 1)
				printf(" %s", str[i]);
			else
				printf(" %s", str[i]);
		}
		i++;
	}
}
