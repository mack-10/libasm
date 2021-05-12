/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujeon <sujeon@student.42.kr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 03:03:09 by sujeon            #+#    #+#             */
/*   Updated: 2021/05/12 20:42:32 by sujeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libasm.h"

int	main(void)
{
	char	dst[50];
	
	printf("ft_strlen |%zu\n", ft_strlen("abcde"));

	printf("ft_strcpy |%s\n", ft_strcpy(dst, "hello world!!!"));
	
	printf("ft_strcmp |%d\n", ft_strcmp("hello", "hello"));
	printf("ft_strcmp |%d\n", ft_strcmp("hello ", "hello"));
	printf("ft_strcmp |%d\n", ft_strcmp("hello", "hello "));
	
	// printf("ft_write |%zd\n", ft_write(1, "hello", 5));
	printf("ft_write |%zd\n", ft_write(-3, "hello", 5));
	
	// printf("ft_read |%zd\n", ft_read(0, dst, 2));
	printf("ft_read |%zd\n", ft_read(-1, dst, 2));
	
    printf("ft_strdup |%s\n", ft_strdup("hello"));
	printf("ft_strdup |%s\n", ft_strdup(""));

	return (0);
}
