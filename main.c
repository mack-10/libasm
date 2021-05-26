/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujeon <sujeon@student.42.kr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 03:03:09 by sujeon            #+#    #+#             */
/*   Updated: 2021/05/26 18:32:10 by sujeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libasm.h"

int	main(void)
{
	char	dst[50];
	int		ret1;
	int		ret2;
	
	// strlen
	printf("\n---------strlen---------\n");
	printf(RED "ft |%zu\n" RESET, ft_strlen("abcde"));
	printf("-> |%zu\n", strlen("abcde"));
	printf(RED "ft |%zu\n" RESET, ft_strlen(""));
	printf("-> |%zu\n", strlen(""));
	// printf("ft |%zu\n", ft_strlen(NULL));
	// printf("-> |%zu\n", strlen(NULL));

	// strcpy
	printf("\n---------strcpy---------\n");
	printf(RED "ft |%s\n" RESET, ft_strcpy(dst, "hello world!!!")); 
	printf("-> |%s\n", strcpy(dst, "hello world!!!"));
	printf(RED "ft |%s\n" RESET, ft_strcpy(dst, "")); 
	printf("-> |%s\n", strcpy(dst, ""));
	// printf("ft |%s\n", ft_strcpy(dst, NULL)); 
	// printf("-> |%s\n", strcpy(dst, NULL));

	// strcmp
	printf("\n---------strcmp---------\n");
	printf(RED "ft s1=s2 |%d\n" RESET, ft_strcmp("hello", "hello"));
	printf("-> s1=s2 |%d\n", strcmp("hello", "hello"));
	printf(RED "ft s1>s2 |%d\n" RESET, ft_strcmp("hello ", "hello"));
	printf("-> s1>s2 |%d\n", strcmp("hello ", "hello"));
	printf(RED "ft s1<s2 |%d\n" RESET, ft_strcmp("hello", "hello "));
	printf("-> s1<s2 |%d\n", strcmp("hello", "hello "));
	printf(RED "ft \"\" |%d\n" RESET, ft_strcmp("", ""));
	printf("-> \"\" |%d\n", strcmp("", ""));
	// printf("ft NULL |%d\n", ft_strcmp(NULL, NULL));
	// printf("-> NULL |%d\n", strcmp(NULL, NULL));
	// printf("ft NULL |%d\n", ft_strcmp("abc", NULL));
	// printf("-> NULL |%d\n", strcmp("abc", NULL));
	// printf("ft NULL |%d\n", ft_strcmp(NULL, "abc"));
	// printf("-> NULL |%d\n", strcmp(NULL, "abc"));
	
	// write
	printf("\n---------write---------\n");
	ret1 = ft_write(1, "hello", 5);
	ret2 = write(1, "hello",5);
	write(1, "\n", 1);
	printf(RED "ft |%d\n" RESET, ret1);
	printf("-> |%d\n", ret2);
	ret1 = ft_write(-3, "hello", 5);
	ret2 = write(-3, "hello",5);
	printf(RED "ft |%d\n" RESET, ret1);
	printf("-> |%d\n", ret2);
	
	// read
	printf("\n---------read---------\n");
	ret1 = ft_read(0, dst, 2);
	ret2 = read(0, dst, 2);
	printf(RED "ft |%d\n" RESET, ret1);
	printf("-> |%d\n", ret2);
	ret1 = ft_read(-1, dst, 2);
	ret2 = read(-1, dst, 2);
	printf(RED "ft |%d\n" RESET, ret1);
	printf("-> |%d\n", ret2);
	
	// strdup
	printf("\n---------strdup---------\n");
    printf(RED "ft |%s\n" RESET, ft_strdup("hello"));
	printf("-> |%s\n", strdup("hello"));
	printf(RED "ft |%s\n" RESET, ft_strdup(""));
	printf("-> |%s\n", strdup(""));
	// printf("ft |%s\n", ft_strdup(NULL));
	// printf("-> |%s\n", strdup(NULL));

	return (0);
}
