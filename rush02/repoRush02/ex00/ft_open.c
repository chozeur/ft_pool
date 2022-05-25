/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_open.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recarlie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 14:12:47 by recarlie          #+#    #+#             */
/*   Updated: 2021/10/30 14:12:49 by recarlie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header/rush02.h"

/* STATUS : DONE
*  Open specified file.
*
*	Dependency : /
*	Used by :
*		ft_get_file_content
*
*	Return values :
*		(-1) if opening failed
*		(int) file_desc if succeed
*/
int	ft_open(char *file)
{
	int	file_desc;

	file_desc = open(file, O_RDONLY);
	return (file_desc);
}
