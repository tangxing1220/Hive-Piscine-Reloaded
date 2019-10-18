/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xtang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 17:41:47 by xtang             #+#    #+#             */
/*   Updated: 2019/10/17 16:48:51 by xtang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	print_file(char *name)
{
	int		fd;
	char	buf[1];

	fd = open(name, O_RDONLY);
	while (read(fd, buf, sizeof(buf)))
	{
		write(1, buf, sizeof(buf));
	}
	close(fd);
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		print_file(argv[1]);
	else if (argc < 2)
		write(1, "File name missing.\n", 19);
	else
		write(1, "Too many arguments.\n", 20);
	return (0);
}
