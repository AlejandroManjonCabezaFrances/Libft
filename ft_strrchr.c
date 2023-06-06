/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <amanjon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 12:16:17 by amanjon-          #+#    #+#             */
/*   Updated: 2023/02/07 15:27:46 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*a;

	a = (char *)s;
	i = ft_strlen(a);
	if (c == '\0')
		return (&a[i]);
	while (i >= 0)
	{
		if (a[i] == (char)c)
			return (&a[i]);
	i--;
	}
	return (NULL);
}

/* int	main(void)
{
	char	s[] = "automovil";

	printf("original %s\n", strrchr(s, 'm')); 
	printf("mia %s", ft_strrchr(s, 'm')); 
	return (0);
} */
