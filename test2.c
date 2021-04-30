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
    int segfault;
    struct sigaction sig;
    char const segstr[] = "(segfault)";
    
    void	test_bzero(char const *test_name, int can_segfault,
		char *dest_libft,
		char *dest_libc,
		size_t length)
    {
        segfault = setjmp(restore); if (!segfault) ft_bzero(dest_libft, length); else dest_libft = segstr;
        segfault = setjmp(restore); if (!segfault)    bzero(dest_libc,  length); else dest_libc  = segstr;
        test_str(test_name, "bzero",                    dest_libft,          dest_libc,          can_segfault);
        test_str(NULL,      "bzero (after the '\\0's)", dest_libft + length, dest_libc + length, can_segfault);
    }
}