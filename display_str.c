void	display_char(char c);

void	display_str(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		display_char(str[i]);
		i++;
	}
}
