int ft_tolower(int c)
{
    if ('A' <= c && c <= 'Z')
        return (c - 'A' + 'a');
    else
        return (c);
}