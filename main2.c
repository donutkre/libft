#include "libft.h"
#include <stdio.h>
#include <ctype.h>
void red () {
  printf("\033[1;31m");
}

void yellow() {
  printf("\033[1;33m");
}

void blue(){
    printf("\e[1;34m");
}

void green(){
    printf("\033[0;32m");
}

void reset () {
  printf("\033[0m");
}
static char	upper(unsigned int i, char c)
{
	i++;
	i--;
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

static char	lower(unsigned int i, char c)
{
	i++;
	i--;
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}

int main(void)
{
    yellow();
    printf("=================================\nft_substr\n=================================\n");
	char* str;
	str = ft_substr("Hello, world!", 7, 2);
	printf("%s\n", str);    
    printf("=================================\nft_strjoin\n=================================\n");
	char s1[] = "peanut";
	char s2[] = "butter";
	printf("%s\n", ft_strjoin(s1, s2));
    printf("=================================\nft_strtrim\n=================================\n");
	printf("%s\n", ft_strtrim("abqbc", "abc"));
	printf("%s\n", ft_strtrim("xavocadoyz", "xyz"));
    printf("=================================\nft_split\n=================================\n");
    char	**tab;
    unsigned int	i;
    
    i = 0;
    tab = ft_split("sdsdsdasd", ' ');
    while (tab[i] != NULL)
    {
    	printf("%s\n", tab[i]);
    	i++;
    }
    printf("=================================\nft_itoa\n=================================\n");
    int nbr = 42;
	printf("%s\n", ft_itoa(nbr));
    printf("=================================\nft_strmapi\n=================================\n");
    char *str3 = ft_strmapi("HeLlo wOrLd!!", upper);
    char *str4 = ft_strmapi("HeLlo wOrLd!!", lower);
	printf("%s\n", str3);
	printf("%s\n", str4);

}