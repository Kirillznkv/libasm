/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshanti <kshanti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 01:40:47 by kshanti           #+#    #+#             */
/*   Updated: 2021/04/01 02:49:22 by kshanti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/head_bonus.h"

void	check_write()
{
	int		a;

	printf("#########################ft_write################################\n");
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

void	check_read()
{
	int		a;
	char	str[50];

	printf("##########################ft_read################################\n");
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

void	check_bonus()
{
	t_list		*tmp;
	int			res;

	printf("############################bonus################################\n");
	tmp = (t_list*)malloc(sizeof(t_list));
	tmp->next = NULL;
	res = ft_list_size(tmp);
	printf("#\t%d(1)\n", res);
	tmp->next = (t_list*)malloc(sizeof(t_list));
	tmp->next->next = NULL;
	res = ft_list_size(tmp);
	printf("#\t%d(2)\n", res);
	tmp->next->next = (t_list*)malloc(sizeof(t_list));
	tmp->next->next->next = NULL;
	res = ft_list_size(tmp);
	printf("#\t%d(3)\n", res);
	free(tmp);
	printf("#################################################################\n");
}