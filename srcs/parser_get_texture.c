/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser_get_texture.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrichard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/23 14:00:00 by jrichard          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2017/03/30 19:35:16 by jrichard         ###   ########.fr       */
=======
/*   Updated: 2017/03/30 17:41:19 by jrichard         ###   ########.fr       */
>>>>>>> 506c03b7047b32355bce118244c4f099c0e18cbd
/*                                                                            */
/* ************************************************************************** */

#include "texture.h"
#include "parser.h"

int				get_texture(t_kvlexer *token, t_rt *rt, t_texture **tex)
{
	t_list		*node;
	t_kvlexer	*tex_token;

	if (token->children && (node = ft_lstsearch(token->children->head,
					&search_key, "TEXTURE")))
	{
		tex_token = (t_kvlexer *)node->content;
		if (tex_token->value)
		{
			if (rt->textures && (node = ft_lstsearch(rt->textures->head,
							&search_tex, tex_token->value)))
				*tex = ((t_texture *)node->content);
			else
			{
				ft_putstr("Couldn't find the TEXTURE named ");
				ft_putendl(tex_token->value);
				tex_token->value = NULL;
				return (0);
			}
			return (1);
		}
		return ((int)ft_error("The TEXTURE should have a value"));
	}
	return (0);
}
