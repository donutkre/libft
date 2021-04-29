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
int main(void)
{
    yellow();
    printf("=================================\nft_isalnum\n=================================\n");
    printf("a : %d\n", ft_isalnum('a'));
    printf("3 : %d\n", ft_isalnum('3'));
    printf(", : %d\n", ft_isalnum(','));
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
    printf("9 : %d\n", ft_isascii('9'));
    printf("Ã : %d\n", ft_isascii('Ã'));
    printf("=================================\nft_isprint\n=================================\n");
    printf("%d\n", ft_isprint('a'));
    printf("%d\n", ft_isprint('A'));
    printf("%d\n", ft_isprint('0'));
    printf("=================================\nft_toupper\n=================================\n");
    printf("%c\n", ft_toupper('a'));
    printf("%c\n", ft_toupper('h'));
    printf("%c\n", ft_toupper('0'));
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
	str11 = " 123";
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
    char dest0[10] = "\0";
    char dest[10] = "000";
    char src[10] = "123456789";
    printf("When dest size is 0: dest = %s return value = %d\n", dest0, ft_strlcat(dest0, src, 5));
    printf("When dest size is equal to size: dest = %s return value = %d\n", dest, ft_strlcat(dest, src, 3));
    printf("When dest size is one less than size: dest = %s return value = %d\n", dest, ft_strlcat(dest, src, 4));
    printf("When dest size is less than size: dest = %s return value = %d\n", dest, ft_strlcat(dest, src, 6));
    printf("When dest size is greater than size: dest = %s return value = %d\n", dest, ft_strlcat(dest, src, 2));
    printf("When size is greater than dest size and src is empty: dest = %s return value = %d\n", dest, ft_strlcat(dest, "", 7));
    printf("When size is 0: dest = %s return value = %d\n", dest, ft_strlcat(dest, src, 0));
    printf("When size is 234567: dest = %s return value = %d\n", dest, ft_strlcat(dest, src, 234567)); 
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
    char  str12[] = "Identity";
	printf("%s\n", ft_memchr(str12, 'd', 4));
	printf("%s\n", ft_memchr(str12, 'd', 2));  
    printf("=================================\nft_memmove\n=================================\n");   
	char str13[] = "abcdefgh";
	printf("memmove before : %s\n", str13);
	ft_memmove(str13+2, str13+1, 3);
	printf("memmove after : %s\n", str13);
    printf("=================================\nft_memcpy\n=================================\n");   
    char str99[] = "memcpy test!";
	char str1111[30];
	char str22[30];
	ft_memcpy(str1111, str99, strlen(str99)+1);
	ft_memcpy(str22, "copy", 5);
	printf("str: %s\nstr1 : %s\nstr2: %s\n",str99,str1111,str22);
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
    int i, * ptr8, sum = 0;
    ptr8 = ft_calloc(10, sizeof(int));
    if (ptr8 == NULL) {
        printf("Error! memory not allocated.");
        exit(0);
    }
    printf("Building and calculating the sequence sum of the first 10 terms \n ");
    for (i = 0; i < 10; ++i) { * (ptr8 + i) = i;
        sum += * (ptr8 + i);
    }
    printf("Sum = %d\n", sum);
    free(ptr8);
    return 0;    
    printf("=================================\nft_bzero\n=================================\n");
    
}
