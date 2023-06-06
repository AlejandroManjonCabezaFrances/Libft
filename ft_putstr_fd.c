/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <amanjon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 14:57:46 by amanjon-          #+#    #+#             */
/*   Updated: 2023/03/08 15:56:49 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
# include <string.h> 
# include <stdio.h>
# include <unistd.h>
# include <xlocale.h>
# include <stdlib.h>

void	ft_putstr_fd(char *str, int fd)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(fd, &str[i], 1);
		i++;
	}
}

/* int main(void)
{
	char	str[] = "monster";
	int	fd;

	
	ft_putstr_fd(str, 1);
	return (0);
}  */
