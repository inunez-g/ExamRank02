/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inunez-g <inunez-g@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 11:27:02 by inunez-g          #+#    #+#             */
/*   Updated: 2021/09/30 13:05:59 by inunez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_strlen(char *str)
{
	int len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

int ft_check_if_repeat(char *str, char a, int len)
{
	int j;

	j = 0;
	while (str[j] != '\0' && j < len)
	{
		if (str[j] == a)
				return (1);
		j++;
	}
	return (0);
}

int main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 3)
	{
		while (argv[1][i])
		{
			if (!ft_check_if_repeat(argv[1], argv[1][i], i))
				write(1, &argv[1][i], 1);
			i++;
		}
		i = 0;
		while (argv[2][i])
		{
			if (!ft_check_if_repeat(argv[1], argv[2][i], ft_strlen(argv[1])) && !ft_check_if_repeat(argv[2], argv[2][i], i))
				write(1, &argv[2][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
