int	ft_strlen(char *str)
{
	int	i;
	i = 0;
	while(str[i] != '\0')
		i++;
	return (i);
}
char    *ft_strrev(char *str)
{
    int i_start;
    i_start = 0;
    int i_end ;
    i_end = ft_strlen(str) - 1;
    int tmp;
    while (i_start < i_end)
    {
        tmp = str[i_start];
        str[i_start] = str[i_end];
        str[i_end] = tmp;
        
        i_start++;
        i_end--;
    }
    return (str);
}
