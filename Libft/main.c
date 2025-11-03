#include "libft.h"

int	ft_atoi(const char *str);
char **ft_split(char const *s, char c);
int	ft_isalpha(int c);

int	main(void)
{
	char	*str = "-23456";
	printf("%d", ft_atoi(str));
	printf("\n");

    char src[] = "Exemplo de texto";
    char dst[50];
    size_t len;

    len = ft_strlcpy(dst, src, 50);

    printf("Texto original: %s\n", src);
    printf("Texto copiado: %s\n", dst);
    printf("Tamanho da string original: %zu\n", len);

    return (0);
	printf("\n");

	printf("%d", ft_isalpha('a'));
}
