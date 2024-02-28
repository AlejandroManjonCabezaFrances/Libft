/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <amanjon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 14:50:37 by amanjon-          #+#    #+#             */
/*   Updated: 2024/02/28 15:23:20 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_realloc(void *ptr, size_t len, size_t size)
{
	void	*new;

	if (size == 0)
		return (NULL);
	new = malloc(sizeof(void *) * size);
	if (new == NULL)
		return (NULL);
	if (ptr != NULL)
	{
		ft_memcpy(new, ptr, len);
		free(ptr);
	}
	return (new);
}

// int main(void)
// {
// 	char *ptr = malloc(20);
// 	size_t	len;
// 	size_t	size;

// 	if (ptr == NULL)
// 	{
// 		printf("Error malloc\n");
// 		return 1;
// 	}
// 	strcpy(ptr, "copy with realloc");
// 	len = ft_strlen(ptr);
// 	size = ft_strlen(ptr);
	
// 	printf("%s\n", ft_realloc(ptr, len, size));
// 	return (0);
// }
