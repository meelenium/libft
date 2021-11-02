/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyuuki <tyuuki@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 17:28:49 by tyuuki            #+#    #+#             */
/*   Updated: 2021/10/15 19:32:56 by tyuuki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int symb)
{
	if ((symb >= 'a' && symb <= 'z') || (symb >= 'A' && symb <= 'Z')
		|| (symb >= '0' && symb <= '9'))
		return (1);
	return (0);
}