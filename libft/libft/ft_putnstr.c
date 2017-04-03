/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvillasa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/16 18:26:14 by hvillasa          #+#    #+#             */
/*   Updated: 2017/03/16 18:26:20 by hvillasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnstr(char *s, size_t len)
{
	while (*s && len)
	{
		write(1, &(*s++), 1);
		len--;
	}
}
