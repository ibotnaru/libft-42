/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibotnaru <ibotnaru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/21 14:26:51 by ibotnaru          #+#    #+#             */
/*   Updated: 2019/02/21 17:13:09 by ibotnaru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
	size_t	i;
	char	*mem;

	i = 0;
	mem = malloc(sizeof(char) * size);
	if (mem != NULL)
		ft_memset(mem, 0, size);
	return ((void *)mem);
}
