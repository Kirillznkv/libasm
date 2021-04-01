/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshanti <kshanti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 01:40:47 by kshanti           #+#    #+#             */
/*   Updated: 2021/04/01 03:20:06 by kshanti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/head.h"

void	check_strdup(void)
{
	char	*str;

	printf("########################ft_strdup##############################\n");
	str = ft_strdup("abc");
	printf("#\t%s(abc)\n", str);
	if (str)
		free(str);
	str = ft_strdup("");
	printf("#\t%s()\n", str);
	if (str)
		free(str);
	str = ft_strdup(NULL);
	printf("#\t%s(null)\n", str);
	if (str)
		free(str);
}

void	check_write(void)
{
	int		a;

	printf("#########################ft_write##############################\n");
	a = ft_write(1, "abc", 3);
	printf("(%d)\n", a);
	a = ft_write(1, "", 0);
	printf("(%d)\n", a);
	a = ft_write(1, "asdffjf", 7);
	printf("(%d)\n", a);
	printf("------->ERRORS:\n");
	a = ft_write(1123, "abc", 3);
	perror("error");
	printf("(%d)\n", a);
	a = ft_write(1, "abc", -12);
	perror("error");
	printf("(%d)\n", a);
	a = ft_write(1, NULL, 3);
	perror("error");
	printf("(%d)\n", a);
}

void	check_read(void)
{
	int		a;
	char	str[50];

	printf("##########################ft_read##############################\n");
	a = read(0, &str, 5);
	printf("%s(%d)\n", str, a);
	printf("------->ERRORS:\n");
	a = ft_read(1123, &str, 3);
	perror("error");
	printf("(%d)\n", a);
	a = ft_read(1, &str, -12);
	perror("error");
	printf("(%d)\n", a);
	a = ft_read(1, NULL, 3);
	perror("error");
	printf("(%d)\n", a);
}
