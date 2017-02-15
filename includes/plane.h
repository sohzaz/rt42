/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   plane.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpachy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/09 14:17:41 by hpachy            #+#    #+#             */
/*   Updated: 2017/02/09 14:19:05 by hpachy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPEHRE_H
# define plane_H

# include "obj.h"

typedef struct	s_plane
{
	t_vector3f	dir;
}				t_plane;

t_obj			*create_plane(t_kvlexer *token, t_rt *rt);

#endif
