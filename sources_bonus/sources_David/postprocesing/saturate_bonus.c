/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   saturate_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgonza <davgonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 12:49:57 by davgonza          #+#    #+#             */
/*   Updated: 2023/06/21 12:23:08 by davgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../david_bonus.h"

float	saturate(float in)
{
	if (in <= 0)
		return (0);
	else if (in >= 1)
		return (1);
	return (in);
}
