/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: volivry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 18:26:48 by volivry           #+#    #+#             */
/*   Updated: 2017/11/09 10:13:45 by volivry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

#define BUF_SIZE 4096

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		ft_display_file(char *filename)
{
	int		fd;
	int		br;
	char	buf[BUF_SIZE + 1];

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		ft_putstr("File name missing.\n");
		return (1);
	}
	while ((br = read(fd, buf, BUF_SIZE)))
	{
		buf[br] = '\0';
		ft_putstr(buf);
		return (1);
	}
	return (0);
}

int		main(int argc, char **argv)
{
	if (argc > 2)
	{
		ft_putstr("Too many arguments.\n");
		return (1);
	}
	ft_display_file(argv[1]);
	return (0);
}
