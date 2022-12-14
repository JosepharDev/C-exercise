#include <stdio.h>
#include <stdlib.h>

typedef struct s_list
{
	int content;
	struct s_list *next;
}t_list;

void ft_lstaddfront(t_list **list, t_list *new)
{
	if(!list || !new)
		return ;
	if(list && new)
		new->next = *list;
	if(new)
		*list = new;
}
t_list *ft_lstnew(int content)
{
	t_list *head = malloc(sizeof(t_list));
	head->content = content;
	head->next = NULL;
	return (head);
}
int main()
{
	t_list *head = NULL;
	int n;
	int content;
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
		printf("Date = %d\n", head->content);
		head = head->next;
	}
}