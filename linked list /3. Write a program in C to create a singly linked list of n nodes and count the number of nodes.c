#include <stdio.h>
#include <stdlib.h>

typedef struct s_list
{
	int content;
	struct s_list *next;
}t_list;

t_list *ft_lstnew(int content)
{
	t_list *node = malloc(sizeof(t_list));
	node->content = content;
	node->next = NULL;
	return (node);
}

t_list *ft_lstlast(t_list *list)
{
	if(!list)
		return (0);
	while(list)
	{
		if(!list->next)
			return (list);
		list = list->next;
	}
	return (list);
}

void ft_lstaddback(t_list **list, t_list *new)
{
	t_list *head;
	if(!list || !new)
		return ;
		head = *list;
	if(*list)
	{
		head = ft_lstlast(*list);
		head->next = new;
	}
	else
		*list = new;
}
int ft_lstsize(t_list *list)
{
	if(!list)
		return (0);
	else
		return (1 + ft_lstsize(list->next));
}
int main()
{
	t_list *head = NULL;

	int n;
	int i = 1;
	int content;
	scanf("%d", &n);
	while(i <= n)
	{
		scanf("%d", &content);
		ft_lstaddback(&head, ft_lstnew(content));
		i++;
	}
	t_list *tmp;
	tmp = head;
	while(head)
	{
		printf("Date = %d\n", head->content);
		head = head->next;
	}
	head = tmp;
	printf("Total Number of nodes %d\n", ft_lstsize(head));
}