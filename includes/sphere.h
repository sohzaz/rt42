/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sphere.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpachy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/09 14:17:41 by hpachy            #+#    #+#             */
/*   Updated: 2017/02/10 15:38:29 by jrichard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPHERE_H
# define SPHERE_H

# include "obj.h"
# include "quadratic.h"

typedef struct	s_sphere
{
	int			radius;
}				t_sphere;

t_obj			*create_sphere(t_kvlexer *token, t_rt *rt);

#endif
