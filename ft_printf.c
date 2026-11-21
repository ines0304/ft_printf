/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: insantia <insantia@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/18 10:28:29 by insantia          #+#    #+#             */
/*   Updated: 2026/11/21 11:02:23 by insantia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list	list;
	int	i;
	
	va_start(list, str);

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			i++;
			if (str[i] == 'c')
				write(1, va_arg(list, char), 1);
			else if (str[i] == 's')
				fd_putstr_fd(va_arg(list, char	*), 1);
			else if (str[i] == 'p')
				
			else if (str[i] == 'd')
			else if (str[i] == 'i')
			else if (str[i] == 'u')
			else if (str[i] == 'x')
			else if (str[i] == 'X')
			else if (str[i] == '%')
			
		}
		i++;
	}
}
