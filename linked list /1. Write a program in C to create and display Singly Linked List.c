#include <stdlib.h>
#include <string.h>
#include <stdio.h>

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

void ft_lstaddfront(t_list **list, t_list *new)
{
	if(!list || !new)
		return ;
	if(list && new)
		new->next = *list;
	if (new)
		*list = new;
}

int main()
{
	t_list *head = NULL;
	int i = 1;
	int content;
	while(i <= 4)
	{
		scanf("%d", &content);
		ft_lstaddfront(&head, ft_lstnew(content));
		i++;
	}
	while(head != NULL)
	{
		printf("Data = %d\n", head->content);
		head = head->next;
	}
}