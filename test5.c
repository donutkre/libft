#include "libft.h"
#include "string.h"
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
void	ft_putbyte(char *pref, void *s, size_t n)
{
	write(1, pref, ft_strlen(pref));
	if (s == NULL)
		write(1, "(null)", 6);
	else
		write(1, s, n);
	write(1, "|\n", 2);
}
int main(void)
{    
    printf("=================================\nft_strncmp\n=================================\n");
    printf("%d\n", ft_strncmp("testt", "teste", 4));
    printf("%d\n", ft_strncmp("a", "a", 99));	/* Identity. */
  	printf("%d\n", ft_strncmp("abc", "abc", 99));	/* Multicharacter. */
  	printf("%d\n", ft_strncmp("abc", "abcd", 99));	/* Length unequal. */
  	printf("%d\n", ft_strncmp("abcd", "abc", 99));
  	printf("%d\n", ft_strncmp("abcd", "abce", 99));	/* Honestly unequal. */
  	printf("%d\n", ft_strncmp("abce", "abcd", 99));
  	printf("%d\n", ft_strncmp("a\203", "a", 2));	/* Tricky if '\203' < 0 */
  	printf("%d\n", ft_strncmp("a\203", "a\003", 2));
  	printf("%d\n", ft_strncmp("abce", "abcd", 3));	/* Count limited. */
  	printf("%d\n", ft_strncmp("abce", "abc", 3));	/* Count == length. */
  	printf("%d\n", ft_strncmp("abcd", "abce", 4));	/* Nudging limit. */
  	printf("%d\n", ft_strncmp("abc", "def", 0));	/* Zero count. */
  	printf("%d\n", ft_strncmp("abc", "", (size_t)-1));	/* set sign bit in count */
  	printf("%d\n", ft_strncmp("abc", "abc", (size_t)-2));    


    printf("=================================\nft_strnstr\n=================================\n");
    char s1[30] = "pineapple pizza";
	char* ptr = ft_strnstr(s1, "pine", 10);
	printf("%s\n", ptr);
    printf("=================================\nft_strrchr\n=================================\n");   
	char* strr = "pineapple pizza";
	printf("%s\n", ft_strrchr(strr, 'p'));
    printf("=================================\nft_strchr\n=================================\n");   
	char* strt = "pineapple pizza";
	printf("%s\n", ft_strchr(strt, 'p'));
    printf("=================================\nft_strlcat\n=================================\n");
	char	*str88;
	char	*dest5;
	int		r;

	dest5 = malloc(30);
	dest5 = strcpy(dest5, "cest dur");
	str88 = strdup(" cest la vie ?");
	printf("\nstr1 : |%s|\nstr2 : |%s|\n", dest5, str88);
	r = ft_strlcat(dest5, str88, ft_strlen(str88) + ft_strlen(dest5) + 1);
	printf("\ndest : |%s|\nr : |%i|\n", dest5, r);

    printf("=================================\nft_strdup\n=================================\n");   
	printf("%s\n", ft_strdup("Hello world!"));
    printf("=================================\nft_strlen\n=================================\n");   
    char a[20]="Program";
    char b[20]={'P','r','o','g','r','a','m','\0'};
    // using the %zu format specifier to print size_t
    printf("Length of string a = %zu \n",strlen(a));
    printf("Length of string b = %zu \n",strlen(b));
    printf("=================================\nft_strlcpy\n=================================\n");   
    char desti[10];
    char *src2 = "2";
    ft_strlcpy(desti ,src2, 4);
    printf("%s\n", desti);
}