
/*
    strdup - string duplicate. Returns a pointer to a new string which is a duplicate of the string s. Memory for the new string is obtained with malloc, and can be freed with free.
*/

#include <stdlib.h>

char *ft_strdup(char *src)
{
    int i;
    char *dest;

    i = 0;
    while (src[i] != '\0')
    {
        i++;
    }
    dest = (char *)malloc(sizeof(char) * i + 1);
    i = 0;
    while (src[i])
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}

/*
    // testing code
    #include <assert.h>
    #include <string.h>
    #include <stdlib.h>

    int main(void)
    {
        const char *str = "hello";
        char *dup =ft_strdup(str);
        assert(strcmp(str, dup) == 0);
        free(dup);
        return (0);
    }
*/
