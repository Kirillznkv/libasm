/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshanti <kshanti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 00:14:04 by kshanti           #+#    #+#             */
/*   Updated: 2021/04/01 02:48:41 by kshanti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/head_bonus.h"

void	check_write(void);
void	check_read(void);
void	check_bonus(void);

void	check_strlen()
{
	printf("########################ft_strlen################################\n");
	printf("#\t%zu", ft_strlen("12345"));
	printf("(%zu)\n", strlen("12345"));
	printf("#\t%zu", ft_strlen(""));
	printf("(%zu)\n", strlen(""));
}

void	check_strcpy()
{
	char	*s;

	printf("########################ft_strcpy################################\n");
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

void	check_strcmp()
{
	printf("########################ft_strcmp################################\n");
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

void	check_strdup()
{
	char	*str;

	printf("########################ft_strdup################################\n");
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

int		main()
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