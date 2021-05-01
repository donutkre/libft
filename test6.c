#include "libft.h"
#include "string.h"
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main(void)
{
    // printf("%d\n", ft_htoi('12345'));
	printf("=================================\nft_ishex\n=================================\n");   
    printf("%d\n", ft_ishex('0xA'));
	printf("=================================\nft_ispunc\n=================================\n");   
    printf("%d\n", ft_ispunc(','));
    printf("=================================\nft_isspace\n=================================\n");   
    printf("%d\n", ft_isspace(' '));
    printf("=================================\nft_isxdigit\n=================================\n");   
    printf("%d\n", ft_isxdigit('3'));
    // printf("%d\n", ft_memdel("0xA"));
    // printf("%d\n", ft_round("0xA"));
}

// int main()
// {
//     int i;
//     printf("All punctuations in C: \n");

//     // looping through all ASCII characters
//     for (i = 0; i <= 127; ++i)
//         if(ft_isalnum	(i)!= 0)
//             printf("%c ", i);
//     return 0;
//     // printf("a : %d\n", ft_isxdigit('a'));
//     // printf("3 : %d\n", ft_isxdigit('3'));
//     // printf(", : %d\n", ft_isxdigit('&'));
// }