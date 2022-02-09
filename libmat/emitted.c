/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   emitted.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pweinsto <pweinsto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 14:34:22 by pweinsto          #+#    #+#             */
/*   Updated: 2022/02/09 14:34:24 by pweinsto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mat.h"

t_color	emitted_color(struct s_hit_record *rec)
{
	return (rec->material->color1);
}

t_color	emitted_checkerboard(struct s_hit_record *rec)
{
	long	test[3];
	int		XOR;

	test[0] = labs((long)floorl(rec->p.vec.x));
	test[1] = labs((long)floorl(rec->p.vec.y));
	test[2] = labs((long)floorl(rec->p.vec.z));
	test[0] = test[0] % 2;
	test[1] = test[1] % 2;
	test[2] = test[2] % 2;
	if (floorl(rec->normal.v[0]))
		test[0] = 0;
	else if (floorl(rec->normal.v[1]))
		test[1] = 0;
	else if (floorl(rec->normal.v[2]))
		test[2] = 0;
	XOR = test[0] ^ test[1] ^ test[2];
	if (XOR)
		return (rec->material->color1);
	else
		return (rec->material->color2);
}