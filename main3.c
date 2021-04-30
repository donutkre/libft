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
// int main(void)
// {
//     yellow();
//     printf("=================================\nft_lstnew\n=================================\n");
//     	t_list *lst = ft_lstnew("mmch\n");
// 	printf("%s", lst->content);
//     printf("=================================\nft_lstadd_front\n=================================\n");

// 	ft_lstadd_front(&lst, ft_lstnew("hello w\n"));
// 	printf("%s", lst->content);
//     printf("=================================\nft_lstsize\n=================================\n");
//     printf("=================================\nft_lstlast\n=================================\n");
//     printf("=================================\nft_lstadd_back\n=================================\n");
//     printf("=================================\nft_lstdelone\n=================================\n");
//     printf("=================================\nft_lstclear\n=================================\n");
//     printf("=================================\nft_lstiter\n=================================\n");
//     printf("=================================\nft_lstmap\n=================================\n");
// }

// int test_lstnew(void)
// {
//     t_list *start;
//     char *p = "Smart people look at the right tree";

//     start = ft_lstnew(p);
//     puts((char*)(start->content));
//     return (0);
// }

// int test_lstadd_front(void)
// {
//     t_list *start;
//     t_list *new;
//     char *p1 = "becuase smart people look at the right tree";
//     char *p2 = "Nature is growing and glowing, ";

//     start = ft_lstnew(p1);
//     new = ft_lstnew(p2);
//     ft_lstadd_front(&start, new);
//     puts((char*)(start->content));
//     puts((char*)(start->next->content));
//     return (0);
// }

// int test_lstadd_back(void)
// {
//     t_list *start;
//     t_list *new;

//     char *p1 = "becuase smart people look at the right tree";
//     char *p2 = "Nature is growing and glowing, ";
//     char *p3 = "that is rocking in the wind";

//     start = ft_lstnew(p1);
//     new = ft_lstnew(p2);
//     ft_lstadd_front(&start, new);
//     new = ft_lstnew(p3);
//     ft_lstadd_back(&start, new);
//     puts((char*)(start->content));
//     puts((char*)(start->next->content));
//     puts((char*)(start->next->next->content));
//     return (0);
// }

// int test_lstsize(void)
// {
//     t_list *start;
//     t_list *new;

//     char *p1 = "becuase smart people look at the right tree";
//     char *p2 = "Nature is growing and glowing, ";
//     char *p3 = "that is rocking in the wind";

//     start = ft_lstnew(p1);
//     new = ft_lstnew(p2);
//     ft_lstadd_front(&start, new);
//     new = ft_lstnew(p3);
//     ft_lstadd_back(&start, new);
//     puts((char*)(start->content));
//     puts((char*)(start->next->content));
//     puts((char*)(start->next->next->content));
//     printf("size: %d\n", ft_lstsize(start));
//     return (0);
// }

// int test_lstlast(void)
// {
//     t_list *start;
//     t_list *new;

//     char *p1 = "becuase smart people look at the right tree";
//     char *p2 = "Nature is growing and glowing, ";
//     char *p3 = "that is rocking in the wind";

//     start = ft_lstnew(p1);
//     new = ft_lstnew(p2);
//     ft_lstadd_front(&start, new);
//     new = ft_lstnew(p3);
//     ft_lstadd_back(&start, new);
//     puts((char*)(ft_lstlast(start)->content));
//     return (0);
// }

// int test_lstdelone(void)
// {
//     char    *c;
//     t_list  *start;

//     c = ft_strdup("1234567890");
//     start = ft_lstnew(c);
//     printf("%s\n", (char*)(start->content));
//     ft_lstdelone(start, &free);
//     printf("%s\n", (char*)(start->content));
// }

// int test_lstclear(void)
// {
//     t_list      *start;
//     t_list      *new;
//     char *one;
//     char *two;
//     char *three;

//     one = ft_strdup("1234567890");
//     two = ft_strdup("asdfghjkl");
//     three = ft_strdup("qwertyuiop");
//     start = ft_lstnew(one);
//     new = ft_lstnew(two);
//     ft_lstadd_back(&start, new);
//     new = ft_lstnew(three);
//     ft_lstadd_back(&start, new);
//     printf("%s\n", (char*)start->content);
//     printf("%s\n", (char*)start->next->content);
//     printf("%s\n", (char*)start->next->next->content);
//     ft_lstclear(&start, &free);
//     printf("%p\n", start);
//     return (0);
// }

// void    convert_str_to_upper(void *s)
// {
//     int     i;
//     char    *str;
//     str = s;    
//     i = 0;
//     while (str[i] != 0)
//     {
//         str[i] = toupper(str[i]);
//         i++;
//     }
// }
// int test_lstiter(void)
// {
//     t_list      *start;
//     t_list      *new;
//     char *one;
//     char *two;
//     char *three;
//     one = ft_strdup("1234567890");
//     two = ft_strdup("asdfghjkl");
//     three = ft_strdup("qwertyuiop");
//     start = ft_lstnew(one);
//     new = ft_lstnew(two);
//     ft_lstadd_back(&start, new);
//     new = ft_lstnew(three);
//     ft_lstadd_back(&start, new);
//     printf("%s\n", (char*)start->content);
//     printf("%s\n", (char*)start->next->content);
//     printf("%s\n", (char*)start->next->next->content);
//     ft_lstiter(start, &convert_str_to_upper);
//     printf("%s\n", (char*)start->content);
//     printf("%s\n", (char*)start->next->content);
//     printf("%s\n", (char*)start->next->next->content);
//     return (0);
// }

// int main(void){
//     test_lstnew();
//     test_lstadd_front();
//     test_lstadd_back();
//     test_lstsize();
//     test_lstlast();
//     test_lstdelone();
//     test_lstclear();
//     test_lstiter();




// }

void	del(void *content);

int	main()
{
	printf("========= ft_lstnew =======\n\n");

	t_list *elem1 = ft_lstnew("a");
	t_list *elem2 = ft_lstnew("i");
	printf("adress: %p, content: %s, n_adress: %p\n", elem1, elem1->content, elem1->next);
	printf("adress: %p, content: %s, n_adress: %p\n", elem2, elem2->content, elem2->next);
	t_list *elem3 = ft_lstnew("u");
	t_list *elem4 = ft_lstnew("e");
	t_list *elem5 = ft_lstnew("o");

	printf("\n\n\n========= ft_lstadd_front =======\n\n");

	t_list **list;
	t_list *tmp;
	list = &elem1;
	ft_lstadd_front(list, elem2);
	ft_lstadd_front(list, elem3);
	ft_lstadd_front(list, elem4);
	ft_lstadd_front(list, elem5);
	tmp = *list;
	while (*list)
	{
		printf("adress: %p, content: %s, n_adress: %p\n", *list, (*list)->content, (*list)->next);
		*list = (*list)->next;
	}
	*list = tmp;
	printf("\n\n\n========= ft_lstsize =======\n");

	int len = ft_lstsize(*list);
	printf("%d\n", len);

	printf("\n\n\n========= ft_lstlast =======\n");

	t_list *last = ft_lstlast(*list);
	printf("adress: %p, content: %s, n_adress: %p\n", last, last->content, last->next);

	printf("\n\n\n========= ft_lstadd_back =======\n");

	t_list **list2;
	t_list *tmp2;
	t_list *elem11 = ft_lstnew("a");
	t_list *elem22 = ft_lstnew("i");
	t_list *elem33 = ft_lstnew("u");
	t_list *elem44 = ft_lstnew("e");
	t_list *elem55 = ft_lstnew("o");
	list2 = &elem11;
	ft_lstadd_back(list2, elem22);
	ft_lstadd_back(list2, elem33);
	ft_lstadd_back(list2, elem44);
	ft_lstadd_back(list2, elem55);
	tmp2 = *list2;
	while (*list2)
	{
		printf("adress: %p, content: %s, n_adress: %p\n", *list2, (*list2)->content, (*list2)->next);
		*list2 = (*list2)->next;
	}
	*list2 = tmp2;

	printf("\n\n\n========= ft_lstdelone =======\n");

	ft_lstdelone(*list2, &del);
	tmp2 = *list2;
	while (*list2)
	{
		printf("adress: %p, content: %s, n_adress: %p\n", *list2, (*list2)->content, (*list2)->next);
		*list2 = (*list2)->next;
	}
	*list2 = tmp2;
}

void	del(void *content)
{
	ft_bzero(content, sizeof(content));
}