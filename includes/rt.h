/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rt.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpachy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/09 13:06:26 by hpachy            #+#    #+#             */
/*   Updated: 2017/02/09 13:06:27 by hpachy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RT_H
# define RT_H

typedef	struct	s_rt
{
	t_camera	camera;
}				t_rt;

t_rt			create_rt();

#endif
