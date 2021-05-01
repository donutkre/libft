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

    printf("=================================\nft_strlen\n=================================\n");   
    char a[20]="Program";
    char b[20]={'P','r','o','g','r','a','m','\0'};
    // using the %zu format specifier to print size_t
    printf("Length of string a = %zu \n",strlen(a));
    printf("Length of string b = %zu \n",strlen(b));
}