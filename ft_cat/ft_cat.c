nclude "main.h"

void	jp_putchar(char c)
{
	write(1, &c, 1);
}

void	jp_putstr(char *str)
{
	while (*str != '\0')
		jp_putchar(*str++);
}

int		jp_display_file(char *filename)
{
	int		fh;
	char	buf[129];
	int		len;

	if ((fh = open(filename, O_RDONLY)) == -1)
		return (1);
	while ((len = read(fh, buf, 128)))
	{
		buf[len] = '\0';
		jp_putstr(buf);
	}
	close(fh);
	return (0);
}

int		main(int argc, char *argv[])
{
	if (argc == 2)
	{
		if (jp_display_file(argv[1]) == 1)
		{
			jp_putstr("An read error occurred\n");
			return (1);
		}
		return (0);
	}
	else if (argc > 2)
	{
		jp_putstr("Too many arguments.\n");
		return (1);
	}
	else
	{
		jp_putstr("File name missing.\n");
		return (1);
	}
}
