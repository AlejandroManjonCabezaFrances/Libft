/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <amanjon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 10:57:21 by amanjon-          #+#    #+#             */
/*   Updated: 2023/02/09 09:12:50 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char	*s1)
{
	char	*ptr;
	int		i;

	i = 0;
	ptr = malloc(sizeof(char) * ft_strlen(s1) + 1);
	if (ptr == NULL)
		return (NULL);
	while (s1[i])
	{
		ptr[i] = s1[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

/* int main(void)
 {
	char	s1[] = "alex";
	printf("%s", ft_strdup(s1));
	return (0);
 } */
//The strdup() function allocates sufficient memory
//for a copy of the string s1, does the copy, and returns a
// pointer to it.  The pointer may subsequently be used
// as an argument to the function free(3).
