int ft_strlen(char *toul)
{
	int i;
	i = 0;

	while (toul[i])
		i++;

	return (i);
}
char *ft_strrev(char *str)
{
    int i = 0;
    int j = ft_strlen(str) - 1;
    char tmp;

    while (i < j)
    {
        tmp = str[i];
        str[i] = str[j];
        str[j] = tmp;
        i++;
        j--;
    }

    return (str);
}
