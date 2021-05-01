
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

void	ft_putbyte(char *pref, void *s, size_t n)
{
	write(1, pref, ft_strlen(pref));
	if (s == NULL)
		write(1, "(null)", 6);
	else
		write(1, s, n);
	write(1, "|\n", 2);
}
void	test_puttab(char **tab)
{
	int		index;

	index = 0;
	printf("Let's see the array :\n");
	if (!tab || !tab[index])
	{
		printf("tab[0] : |(null)|\n\n");
		return ;
	}
	while (tab[index])
	{
		printf("tab[%i] : |%s|\n", index, tab[index]);
		index++;
	}
	printf("\n");
}
void	test_free(char *src1, char *src2, char *dest1, char *dest2)
{
	if (src1)
		free(src1);
	if (src2)
		free(src2);
	if (dest1)
		free(dest1);
	if (dest2)
		free(dest2);
}
// size_t	ft_strlcat(char *dst, const char *src, size_t size)
static void	free_tab(char **tab)
{
	int	i;

	i = 0;
	printf("coucou 0\n");
	if (!tab)
		return ;
	printf("coucou 1\n");
	while (tab[i])
	{
		printf("free tab[%i] : |%s|\n sizeof : %li, ptr : %p\n",
				i, tab[i], sizeof(tab[i]), tab[i]);
		if (tab[i])
			free(tab[i]);
		printf("coucou 3\n\n");
		i++;
	}
	printf("coucou 4\n");
	printf("free tab[%i] : |%s|\n", i, tab[i]);
	free(tab);
}

static void	ft_the_free(void *content)
{
	free(content);
}

static void	ft_putstr2(void *content)
{
	char	*str;

	str = (char *)content;
	ft_putstr_fd(str, 1);
	ft_putstr_fd(" ", 1);	
}

static void	*ft_minus(void *content)
{
	char	*str;

	str = ft_calloc(sizeof(char), ft_strlen((char *)content) + 2);
	str[0] = '-';
	str[1] = *(char *)content;
	return ((void *)str);
}
void	test_putlst(t_list *lst)
{
	int		i;

	i = 0;
	if (!lst)
		printf("elemnt empty\n");
	while (lst)
	{
		printf("elem %i : |%s|\n", i, (char *)lst->content);
		i++;
		lst = lst->next;
	}
}
int		test_chain_lst(void)
{
	t_list	*lst;
	t_list	*tmp;
	t_list	*tmp2;

	printf("lstnew :\n");
	lst = ft_lstnew(ft_strdup("4"));
	test_putlst(lst);

	printf("\nlstadd_front :\n");
	ft_lstadd_front(&lst, ft_lstnew(ft_strdup("3")));
	test_putlst(lst);

	// void ft_lstadd_back(t_list **alst, t_list *new)
	printf("\nlstadd_back :\n");
	tmp = lst;
	ft_lstadd_back(&tmp, ft_lstnew(ft_strdup("5")));
	test_putlst(tmp);

	// t_list	*ft_lstlast(t_list *lst)
	tmp = ft_lstlast(lst);
	printf("\nlstlast : \nlast element : |%s|\n",
			(char *)tmp->content);

	printf("\nlstsize : %i\n", ft_lstsize(lst));

	// void ft_lstdelone(t_list *lst, void (*del)(void*))
	printf("\nlist fill :\n");
	ft_lstadd_front(&lst, ft_lstnew(ft_strdup("2")));
	ft_lstadd_front(&lst, ft_lstnew(ft_strdup("1")));
	ft_lstadd_front(&lst, ft_lstnew(ft_strdup("0")));
	test_putlst(lst);

	printf("	lstdelone :\n");
	tmp = lst->next->next;
	tmp2 = tmp->next;
	ft_lstdelone(tmp, &ft_the_free);
	lst->next->next = tmp2;
	test_putlst(lst);

	printf("\n	lstclear :\n");
	tmp = lst->next->next;
	ft_lstclear(&tmp, &ft_the_free);
	lst->next->next = tmp;
	test_putlst(lst);

	printf("\nfill list :\n");
	ft_lstadd_back(&lst, ft_lstnew(ft_strdup("2")));
	ft_lstadd_back(&lst, ft_lstnew(ft_strdup("3")));
	ft_lstadd_back(&lst, ft_lstnew(ft_strdup("4")));
	ft_lstadd_back(&lst, ft_lstnew(ft_strdup("5")));
	test_putlst(lst);

	printf("\nlstiter : print with putstr2\n");
	ft_lstiter(lst, &ft_putstr2);

	// t_list	*ft_lstmap(t_list *lst, void *(*f)(void *),void (*del)(void *))
	printf("\n\nlstmap :\n");
	tmp = ft_lstmap(lst, &ft_minus, &ft_the_free);
	printf("original list :\n");
	test_putlst(lst);
	printf("\nmodified list :\n");
	test_putlst(tmp);

	return (1);
}
int main(void){
    test_chain_lst();
}
