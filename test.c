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
    printf("=================================\n1 : ft_isalnum\n=================================\n");
    printf("a : %d\n", ft_isalnum('a'));
    printf("3 : %d\n", ft_isalnum('3'));
    printf(", : %d\n", ft_isalnum('&'));
    printf("=================================\n2 : ft_isdigit\n=================================\n");
    printf("a : %d\n", ft_isdigit('a'));
    printf("A : %d\n", ft_isdigit('A'));
    printf("4 : %d\n", ft_isdigit('4'));
    printf("=================================\n3 : ft_isalpha\n=================================\n");
    printf("z : %d\n", ft_isalpha('z'));
    printf("h : %d\n", ft_isalpha('h'));
    printf("0 : %d\n", ft_isalpha('0'));
    printf("=================================\n4 : ft_isascii\n=================================\n");
    printf("a : %d\n", ft_isascii('a'));
    printf("9 : %d\n", ft_isascii('128'));
    printf("Ã : %d\n", ft_isascii('Ã'));
    printf("=================================\n5 : ft_isprint\n=================================\n");
    printf("%d\n", ft_isprint('a'));
    printf("%d\n", ft_isprint('A'));
    printf("%d\n", ft_isprint('0'));
    printf("=================================\n6 : ft_toupper\n=================================\n");
    printf("%c\n", ft_toupper('a'));
    printf("%c\n", ft_toupper('h'));
    printf("%c\n", ft_toupper('&'));
    printf("=================================\n7 : ft_tolower\n=================================\n");
    printf("%c\n", ft_tolower('g'));
    printf("%c\n", ft_tolower('A'));
    printf("%c\n", ft_tolower('C'));
  	printf("=================================\nAdditional : ft_ishex\n=================================\n");   
    printf("%d\n", ft_ishex('0xA'));
	  printf("=================================\nAdditional : ft_ispunc\n=================================\n");   
    printf("%d\n", ft_ispunc(','));
    printf("=================================\nAdditional : ft_isspace\n=================================\n");   
    printf("%d\n", ft_isspace(' '));
    printf("=================================\nAdditional : ft_isxdigit\n=================================\n");   
    printf("%d\n", ft_isxdigit('3'));
    printf("=================================\n8 : ft_atoi\n=================================\n");
    char *str;
    char *str1;
    char *str2;
    char *str3;
    char *str4;
    char *str5;
    char *str6;
    char *str7;
    char *str8;
    char *str9;
    char *str10;
    char *str11;
    str = " ---+--+1234ab567";
    str1 = "     ---123123ab567";
    str2 = "-   -  -1a";
    str3 = "- + -+ - + a 1 b";
    str4 = "\t -123";
    str5 = "\n -123";
    str6 = "\v -123";
    str7 = "\f -123";
    str8 = "\r -123";
    str9 = "\t\n\v\f\r\t -+-+123abc";
    str10 = "-123";
    str11 = "-24+42";
    printf("Output : %d\n", ft_atoi(str));
    printf("Output : %d\n", ft_atoi(str1));
    printf("Output : %d\n", ft_atoi(str2));
    printf("Output : %d\n", ft_atoi(str3));
    printf("Output : %d\n", ft_atoi(str4));
    printf("Output : %d\n", ft_atoi(str5));
    printf("Output : %d\n", ft_atoi(str6));
    printf("Output : %d\n", ft_atoi(str7));
    printf("Output : %d\n", ft_atoi(str8));
    printf("Output : %d\n", ft_atoi(str9));
    printf("Output : %d\n", ft_atoi(str10));
    printf("Output : %d\n", ft_atoi(str11));
    printf("=================================\n9 : ft_memcmp\n=================================\n");   
    printf("%d\n", ft_memcmp("42KL", "42KL123", 3));
	  printf("%d\n", ft_memcmp("42KL", "42KL123", 4));
    printf("=================================\n10 : ft_memchr\n=================================\n"); 
    char  str12[] = "Identity is true";
    printf("%s\n", ft_memchr(str12, 'd', 8));
    printf("%s\n", ft_memchr(str12, 'd', 2));  
    printf("=================================\n11 : ft_memmove\n=================================\n");   
    char str13[] = "abcdefgh";
    printf("memmove before : %s\n", str13);
    ft_memmove(str13+2, str13+1, 3);
    printf("memmove after : %s\n", str13);
    printf("=================================\n12 : ft_memcpy\n=================================\n");   
    char	*scr1;
    char	*src2;
    char	*dest1;
    char	*dest2;
    size_t	n;
    size_t	len;

    dest1 = (char *)malloc(30);
    dest2 = (char *)malloc(30);
    scr1 = strdup("Hello World!");
    src2 = strdup("Hello World!");
    n = 4;
    len = strlen(scr1);
    printf("n : %zu, src : |%s|\n", n, scr1);
    dest1 = memcpy(dest1, scr1, n);
    dest2 = ft_memcpy(dest2, src2, n);
    ft_putbyte("   memcpy : |", dest1, len);
    ft_putbyte("ft_memcpy : |", dest2, len);
    free(scr1);
    free(src2);
    printf("=================================\n13 : ft_memset\n=================================\n"); 
    char str14[100] = "Hello World!";
    printf("%s\n", str14);
    printf("%s\n", ft_memset(str14, 'a', 5));
    printf("%s\n", str14);      
    printf("=================================\n14 : ft_memccpy\n=================================\n");  
    char *msg = "This is the string: not copied";
    char buff[80];
    ft_memset( buff, '\0', 80 );
    ft_memccpy( buff, msg, 'ng', 80 );
    printf( "%s\n", buff ); 
    printf("=================================\n15 : ft_calloc\n=================================\n"); 
    char	*str15;
	  char	*str16;
    str15 = (char *)calloc(sizeof(char), 10);
    str16 = (char *)ft_calloc(sizeof(char), 10);
    strcpy(str15, "testing");
    strcpy(str16, "testing");
    printf("%s\n", str15, str16);


    printf("=================================\n16 : ft_bzero\n=================================\n"); 
    char	str22[24] = "This is a sample string";
  	size_t	i = 0;

    printf("%s\n", str22);
    ft_bzero(str22, 10);
    printf("%s\n", str22);
    while (i < sizeof(str22))
    {
      printf("%c ", str22[i]);
      i++;
    }
    printf("\n");
    return (0);

    printf("=================================\n17 : ft_strncmp\n=================================\n");
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


    printf("=================================\n18 : ft_strnstr\n=================================\n");
    char s3[30] = "pineapple pizza";
    char* ptr = ft_strnstr(s3, "pine", 10);
    printf("%s\n", ptr);
    printf("=================================\n19 : ft_strrchr\n=================================\n");   
    char* str20 = "pineapple pizza";
    printf("%s\n", ft_strrchr(str20, 'p'));
    printf("=================================\n20 : ft_strchr\n=================================\n");   
    char* strt = "pineapple pizza";
    printf("%s\n", ft_strchr(strt, 'p'));
    printf("=================================\n21 : ft_strlcat\n=================================\n");
    char	*str21;
    char	*dest5;
    int		r;

    dest5 = malloc(30);
    dest5 = strcpy(dest5, "cest dur");
    str21 = strdup(" cest la vie ?");
    printf("\nstr1 : |%s|\nstr2 : |%s|\n", dest5, str21);
    r = ft_strlcat(dest5, str21, ft_strlen(str21) + ft_strlen(dest5) + 1);
    printf("\ndest : |%s|\nr : |%i|\n", dest5, r);

    printf("=================================\n22 : ft_strdup\n=================================\n");   
	  printf("%s\n", ft_strdup("Hello world!"));
    printf("=================================\n23 : ft_strlen\n=================================\n");   
    char a1[20]="Program";
    char b2[20]={'P','r','o','g','r','a','m','\0'};
    // using the %zu format specifier to print size_t
    printf("Length of string a = %zu \n",strlen(a1));
    printf("Length of string b = %zu \n",strlen(b2));
    printf("=================================\n24 : ft_strlcpy\n=================================\n");   
    char desti[10];
    char *src3 = "2";
    ft_strlcpy(desti ,src3, 4);
    printf("%s\n", desti);
    printf("=================================\n25 : ft_substr\n=================================\n");
    char* str17;
    str17 = ft_substr("Hello, world!", 7, 2);
    printf("%s\n", str17);    
    printf("=================================\n26 : ft_strjoin\n=================================\n");
    char s1[] = "peanut";
    char s2[] = "butter";
    printf("%s\n", ft_strjoin(s1, s2));
    printf("=================================\n27 : ft_strtrim\n=================================\n");
    printf("%s\n", ft_strtrim("abqbc", "abc"));
    printf("%s\n", ft_strtrim("xavocadoyz", "xyz"));
    printf("=================================\n28 : ft_split\n=================================\n");
    char	**tab;
    unsigned int	index;
    
    index = 0;
    tab = ft_split("sdsdsdasd", ' ');
    while (tab[index] != NULL)
    {
    	printf("%s\n", tab[index]);
    	index++;
    }
    printf("=================================\n29 : ft_itoa\n=================================\n");
    int nbr = 42;
	  printf("%s\n", ft_itoa(nbr));
    printf("=================================\n30 : ft_strmapi\n=================================\n");
    char *str18 = ft_strmapi("HeLlo wOrLd!!", upper);
    char *str19 = ft_strmapi("HeLlo wOrLd!!", lower);
    printf("%s\n", str18);
    printf("%s\n", str19);
}