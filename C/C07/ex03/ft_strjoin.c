/*
    Write a function that will concat all the strings pointer by strs separated by sep. size is the number of strings in strs, if size is 0, you must return an empty string that you can free().
*/

char *ft_strjoin(int size, char **strs, char *sep)
{
    int i;
    int j;
    int k;
    int len;
    char *str;

    i = 0;
    len = 0;
    while (i < size)
    {
        j = 0;
        while (strs[i][j])
        {
            len++;
            j++;
        }
        i++;
    }
    len += (size - 1) * strlen(sep);
    str = (char *)malloc(sizeof(char) * len + 1);
    i = 0;
    k = 0;
    while (i < size)
    {
        j = 0;
        while (strs[i][j])
        {
            str[k++] = strs[i][j++];
        }
        j = 0;
        while (sep[j] && i < size - 1)
        {
            str[k++] = sep[j++];
        }
        i++;
    }
    str[k] = '\0';
    return (str);
}
