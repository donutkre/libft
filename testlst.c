
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

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
void	test_free(char *s1, char *s2, char *d1, char *d2)
{
	if (s1)
		free(s1);
	if (s2)
		free(s2);
	if (d1)
		free(d1);
	if (d2)
		free(d2);
}

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

static void	ft_free(void *c)
{
	free(c);
}

static void	ft_putstr2(void *c)
{
	char	*str;

	str = (char *)c;
	ft_putstr_fd(str, 1);
	ft_putstr_fd(" ", 1);	
}

static void	*ft_minus(void *c)
{
	char	*str;

	str = ft_calloc(sizeof(char), ft_strlen((char *)c) + 2);
	str[0] = '-';
	str[1] = *(char *)c;
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

	printf("=================================\n1 : ft_lstnew\n=================================\n");
	lst = ft_lstnew(ft_strdup("4"));
	test_putlst(lst);

	printf("=================================\n2 : ft_lstadd_front\n=================================\n");
	ft_lstadd_front(&lst, ft_lstnew(ft_strdup("3")));
	test_putlst(lst);

	printf("=================================\n3 : ft_lstadd_back\n=================================\n");
	tmp = lst;
	ft_lstadd_back(&tmp, ft_lstnew(ft_strdup("5")));
	test_putlst(tmp);

	printf("=================================\n4 : ft_lstlast\n=================================\n");
	tmp = ft_lstlast(lst);
	printf("last element : |%s|\n", (char *)tmp->content);

	printf("=================================\n5 : ft_lstsize\n=================================\n");
	printf("lstsize : %i\n", ft_lstsize(lst));

	printf("=================================\n6 : ft_lstdelone\n=================================\n");
	printf("\nlist fill :\n");
	ft_lstadd_front(&lst, ft_lstnew(ft_strdup("2")));
	ft_lstadd_front(&lst, ft_lstnew(ft_strdup("1")));
	ft_lstadd_front(&lst, ft_lstnew(ft_strdup("0")));
	test_putlst(lst);
	tmp = lst->next->next;
	tmp2 = tmp->next;
	ft_lstdelone(tmp, &ft_free);
	lst->next->next = tmp2;
	test_putlst(lst);

	printf("=================================\n7 : ft_lstclear\n=================================\n");
	tmp = lst->next->next;
	ft_lstclear(&tmp, &ft_free);
	lst->next->next = tmp;
	test_putlst(lst);

	printf("\nfill list :\n");
	ft_lstadd_back(&lst, ft_lstnew(ft_strdup("2")));
	ft_lstadd_back(&lst, ft_lstnew(ft_strdup("3")));
	ft_lstadd_back(&lst, ft_lstnew(ft_strdup("4")));
	ft_lstadd_back(&lst, ft_lstnew(ft_strdup("5")));
	test_putlst(lst);

	printf("=================================\n8 : ft_lstiter\n=================================\n");
	printf("lstiter : print as a string with putstr2\n");
	ft_lstiter(lst, &ft_putstr2);


	printf("\n=================================\n9 : ft_lstmap\n=================================\n");
	printf("\n\nlstmap :\n");
	tmp = ft_lstmap(lst, &ft_minus, &ft_free);
	printf("original list :\n");
	test_putlst(lst);
	printf("\nmodified list :\n");
	test_putlst(tmp);

	return (1);
}

int main(void){
    test_chain_lst();
}
