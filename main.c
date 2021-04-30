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
    yellow();
    printf("=================================\nft_isalnum\n=================================\n");
    printf("a : %d\n", ft_isalnum('a'));
    printf("3 : %d\n", ft_isalnum('3'));
    printf(", : %d\n", ft_isalnum('&'));
    printf("=================================\nft_isdigit\n=================================\n");
    printf("a : %d\n", ft_isdigit('a'));
    printf("A : %d\n", ft_isdigit('A'));
    printf("4 : %d\n", ft_isdigit('4'));
    printf("=================================\nft_isalpha\n=================================\n");
    printf("z : %d\n", ft_isalpha('z'));
    printf("h : %d\n", ft_isalpha('h'));
    printf("0 : %d\n", ft_isalpha('0'));
    printf("=================================\nft_isascii\n=================================\n");
    printf("a : %d\n", ft_isascii('a'));
    printf("9 : %d\n", ft_isascii('128'));
    printf("Ã : %d\n", ft_isascii('Ã'));
    printf("=================================\nft_isprint\n=================================\n");
    printf("%d\n", ft_isprint('a'));
    printf("%d\n", ft_isprint('A'));
    printf("%d\n", ft_isprint('0'));
    printf("=================================\nft_toupper\n=================================\n");
    printf("%c\n", ft_toupper('a'));
    printf("%c\n", ft_toupper('h'));
    printf("%c\n", ft_toupper('&'));
    printf("=================================\nft_tolower\n=================================\n");
    printf("%c\n", ft_tolower('g'));
    printf("%c\n", ft_tolower('A'));
    printf("%c\n", ft_tolower('C'));
    printf("=================================\nft_atoi\n=================================\n");
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
	dest5 = strcpy(dest5, "coucou");
	str88 = strdup(" ca va les amis ?");
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
    printf("=================================\nft_memcmp\n=================================\n");   
    printf("%d\n", ft_memcmp("42KL", "42KL123", 3));
	printf("%d\n", ft_memcmp("42KL", "42KL123", 4));
    printf("=================================\nft_memchr\n=================================\n"); 
    char  str12[] = "Identity is true";
	printf("%s\n", ft_memchr(str12, 'd', 8));
	printf("%s\n", ft_memchr(str12, 'd', 2));  
    printf("=================================\nft_memmove\n=================================\n");   
	char str13[] = "abcdefgh";
	printf("memmove before : %s\n", str13);
	ft_memmove(str13+2, str13+1, 3);
	printf("memmove after : %s\n", str13);
    printf("=================================\nft_memcpy\n=================================\n");   
	char	*src1111;
	char	*src2222;
	char	*dest1;
	char	*dest2;
	size_t	n;
	size_t	len;

	dest1 = (char *)malloc(30);
	dest2 = (char *)malloc(30);
	src1111 = strdup("Hello World!");
	src2222 = strdup("Hello World!");
	n = 4;
	len = strlen(src1111);
	printf("n : %zu, src : |%s|\n", n, src1111);
	dest1 = memcpy(dest1, src1111, n);
	dest2 = ft_memcpy(dest2, src2222, n);
	ft_putbyte("   memcpy : |", dest1, len);
	ft_putbyte("ft_memcpy : |", dest2, len);
	free(src1111);
	free(src2222);
    printf("=================================\nft_memset\n=================================\n"); 
	char str77[100] = "Hello World!";
	printf("%s\n", str77);
	printf("%s\n", ft_memset(str77, 'a', 5));
	printf("%s\n", str77);      
    printf("=================================\nft_memccpy\n=================================\n");  
    char *msg = "This is the string: not copied";
    char buffer[80];
    ft_memset( buffer, '\0', 80 );
    ft_memccpy( buffer, msg, 'ng', 80 );
    printf( "%s\n", buffer ); 
    printf("=================================\nft_calloc\n=================================\n"); 
    char	*str111;
	char	*str222;
	str222 = (char *)ft_calloc(sizeof(char), 10);
	strcpy(str111, "coucou");
	strcpy(str222, "ccc");
	printf("%s\n", str111, str222);
    return (1);
    
    printf("=================================\nft_bzero\n=================================\n");
//     int segfault;
// struct sigaction sig;
// char const segstr[] = "(segfault)";



// void	test_bzero(char const *test_name, int can_segfault,
// 		char *dest_libft,
// 		char *dest_libc,
// 		size_t length)
// {
// 	segfault = setjmp(restore); if (!segfault) ft_bzero(dest_libft, length); else dest_libft = segstr;
// 	segfault = setjmp(restore); if (!segfault)    bzero(dest_libc,  length); else dest_libc  = segstr;
// 	test_str(test_name, "bzero",                    dest_libft,          dest_libc,          can_segfault);
// 	test_str(NULL,      "bzero (after the '\\0's)", dest_libft + length, dest_libc + length, can_segfault);
// }

}
