/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   obj.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpachy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/09 13:42:45 by hpachy            #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2017/03/30 18:49:29 by jrichard         ###   ########.fr       */
=======
/*   Updated: 2017/03/30 17:42:17 by jrichard         ###   ########.fr       */
>>>>>>> 506c03b7047b32355bce118244c4f099c0e18cbd
/*                                                                            */
/* ************************************************************************** */

#ifndef OBJ_H
# define OBJ_H

# include "ray.h"
# include "material.h"
# include "light.h"
# include "texture.h"
# include "inter.h"

typedef struct s_light	t_light;

typedef	struct			s_obj
{
	t_vector3f			pos;
	t_material			mat;
	t_texture			*tex;
	int					id;
	int					is_src;
	int					is_visible;
	t_light				light;
	void				*data;
	float				(*inter)(struct s_obj *, t_ray *);
	t_vector3f			(*normal)(struct s_obj *, t_vector3f *);
	t_vector3f			(*texture)(struct s_obj *, t_inter);
	void				(*destroy)(struct s_obj *);
}						t_obj;

#endif
