/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_filecontent.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recarlie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 15:34:56 by recarlie          #+#    #+#             */
/*   Updated: 2021/10/30 15:34:57 by recarlie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header/rush02.h"

/* STATUS : WIP
*  Use both open, read & close functions in order to get a malloc'ed string of
*  the dictionnary content.
*
*	Dependency :
*		ft_open, ft_read, close, ft_strdup
*	Used by :
*		//
*/
char	*ft_get_filecontent(char *dictionnary)
{
	char	*content;
	 int	file_desc;

	file_desc = ft_open(dictionnary);
	if (file_desc != -1)
		content = ft_read(file_desc);
	if (content == NULL || file_desc == -1)
		return (NULL);
	return (content);
}
