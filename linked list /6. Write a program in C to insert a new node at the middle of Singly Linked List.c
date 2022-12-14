#include <stdlib.h>
#include <stdio.h>

typedef struct s_list
{
	int content;
	struct s_list *next;
}t_list;

void ft_lstaddfront(t_list **list, t_list *new)
{
	if(!list || !new)
		return ;
	if(list || new)
		new->next = *list;
	if(new)
		*list = new;
} 

t_list *ft_lstnew(int content)
{
	t_list *node = malloc(sizeof(t_list));
	node->content = content;
	node->next = NULL;
	return (node);
}
void ft_lstdel(t_list **list, int pos, t_list *new)
{
	int i = 1;
	t_list *tmp;
	if(!list || !new)
		return ;
	while((*list)->next)
	{
		if (i == pos)
		{
			new->next = *list;
			(*list) = new;
			return;
		}
		*list = (*list)->next;
		i++;
	}
}
int main()
{
	t_list *head = NULL;
	t_list *tmp = NULL;
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
	tmp = head;
	while(head)
	{
		printf("Data = %d\n", head->content);
		head = head->next;
	}
	printf("\n\n\n\n\n\n");
	head = tmp;
	ft_lstdel(&tmp, 2, ft_lstnew(2022));
	while(tmp)
	{
		printf("Date = %d\n", tmp->content);
		tmp = tmp->next;
	}
}