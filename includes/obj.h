/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   obj.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpachy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/09 13:42:45 by hpachy            #+#    #+#             */
/*   Updated: 2017/02/18 18:25:31 by jrichard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OBJ_H
# define OBJ_H

# include "ray.h"

typedef	struct	s_material
{
	float		ka;
	float		kd;
	float		ks;
	int			sh;
}				t_material;

typedef	struct	s_obj
{
	t_vector3f	pos;
	t_material	mat;
	int			id;
	char		is_src;
	char		is_visible;
	t_vector3f	color;
	void		*data;
	float		(*inter)(struct s_obj *, t_ray *);
	t_vector3f	(*normal)(struct s_obj *, t_vector3f *);
}				t_obj;

#endif
