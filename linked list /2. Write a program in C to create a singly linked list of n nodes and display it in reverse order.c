#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct s_list
{
	int content;
	struct s_list *next;
}t_list;

t_list *ft_lstnew(int content)
{
	t_list *node = malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}

void ft_lstaddfront(t_list **list, t_list *new)
{
	if (!list || !new)
		return ;
	if (list && new)
		new->next = *list;
	if(new)
		*list = new;
}
t_list *ft_lstlast(t_list *list)
{
	if(!list)
		return(0);
	while(list)
	{
		if(list->next == NULL)
			return (list);
		list = list->next;
	}
	return (list);
}
void ft_lstaddback(t_list **list, t_list *new)
{
	t_list *head;
	if(!list || !new)
		return;
	head = *list;
	if(*list)
	{
		head = ft_lstlast(*list);
		head->next = new;
	}
	else
		*list = new;
}

int main()
{
	t_list *head = NULL;
	int content;
	int n;
	int i = 1;
	scanf("%d", &n);
	while(i <= n)
	{
		scanf("%d", &content);
		ft_lstaddfront(&head, ft_lstnew(content));
		i++;
	}
	while(head)
	{
		printf("Data = %d\n", head->content);
		head = head->next;
	}
}