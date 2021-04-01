/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshanti <kshanti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 00:14:04 by kshanti           #+#    #+#             */
/*   Updated: 2021/04/01 03:21:49 by kshanti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/head_bonus.h"

void	check_write(void);
void	check_read(void);
void	check_strdup(void);

void	check_strlen(void)
{
	printf("########################ft_strlen##############################\n");
	printf("#\t%zu", ft_strlen("12345"));
	printf("(%zu)\n", strlen("12345"));
	printf("#\t%zu", ft_strlen(""));
	printf("(%zu)\n", strlen(""));
}

void	check_strcpy(void)
{
	char	*s;

	printf("########################ft_strcpy##############################\n");
	printf("#\t%s", ft_strcpy(NULL, NULL));
	printf("(seg)\n");
	s = strdup("");
	printf("#\t%s", ft_strcpy(s, "abc"));
	printf("(%s)\n", strcpy(s, "abc"));
	free(s);
	s = strdup("abc");
	printf("#\t%s", ft_strcpy(s, ""));
	printf("(%s)\n", strcpy(s, ""));
	printf("#\t%s", ft_strcpy(s, "cc"));
	printf("(%s)\n", strcpy(s, "cc"));
	printf("#\t%s", ft_strcpy(s, "cccc"));
	printf("(%s)\n", strcpy(s, "cccc"));
	free(s);
}

void	check_strcmp(void)
{
	printf("########################ft_strcmp##############################\n");
	printf("#\t%d", ft_strcmp(NULL, NULL));
	printf("(seg)\n");
	printf("#\t%d", ft_strcmp("abc", "abc"));
	printf("(%d)\n", strcmp("abc", "abc"));
	printf("#\t%d", ft_strcmp("", ""));
	printf("(%d)\n", strcmp("", ""));
	printf("#\t%d", ft_strcmp("abca", "abc"));
	printf("(%d)\n", strcmp("abca", "abc"));
	printf("#\t%d", ft_strcmp("abc", "abca"));
	printf("(%d)\n", strcmp("abc", "abca"));
}

void	check_bonus(void)
{
	t_list		*tmp;
	int			res;

	printf("############################bonus##############################\n");
	tmp = (t_list *)malloc(sizeof(t_list));
	tmp->next = NULL;
	res = ft_list_size(tmp);
	printf("#\t%d(1)\n", res);
	tmp->next = (t_list *)malloc(sizeof(t_list));
	tmp->next->next = NULL;
	res = ft_list_size(tmp);
	printf("#\t%d(2)\n", res);
	tmp->next->next = (t_list *)malloc(sizeof(t_list));
	tmp->next->next->next = NULL;
	res = ft_list_size(tmp);
	printf("#\t%d(3)\n", res);
	free(tmp);
	printf("###############################################################\n");
}

int	main(void)
{
	check_strlen();
	check_strcpy();
	check_strcmp();
	check_strdup();
	check_write();
	check_read();
	check_bonus();
	return (0);
}
