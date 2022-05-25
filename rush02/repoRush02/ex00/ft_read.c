/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recarlie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 14:36:50 by recarlie          #+#    #+#             */
/*   Updated: 2021/10/30 14:36:53 by recarlie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header/rush02.h"

/* STATUS : DONE
*
*  Read the file specified with file_desc, place the content in buffer and
*  copy the buffer into a malloc'ed string.
*  If malloc failed, return a NULL pointer else return the new string.
*
*	Dependency :
*		read, strdup
*	Used in :
*		ft_get_dictionnary_content
*	Return values :
*		(NULL) if malloc failed
*		(char *)result (malloc'ed)
*/
char	*ft_read(int file_desc)
{
	char	buff[10001];
	 int	dict_size;
	char	*txt;

	dict_size = read(file_desc, buff, 10001);
	if (dict_size == -1)
		return (NULL);
	txt = (char *)malloc(sizeof(char) * (ft_strlen_nospace(buff) + 1));
	if (txt == NULL)
		return (NULL);
	ft_strdup_nospace(txt, buff);
	return (txt);
}
