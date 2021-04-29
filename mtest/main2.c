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
char upper(unsigned int i, char c)
{
	if (c >= 'a' && c <= 'z');
		c-=('a' - 'A');
	return(c);
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
    char *str2 = ft_itoa(123);
	printf("%s\n", str2);
    printf("=================================\nft_strmapi\n=================================\n");
    char *str3 = ft_strmapi("HeLlo wOrLd!!", upper);
	printf("%s\n", str3);

}