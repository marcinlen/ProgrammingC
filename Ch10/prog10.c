// returning a pointer from a function

#include <stdio.h>

struct entry
{
	int value;
	struct entry *next;
};

typedef struct entry entry_t;

entry_t* find_entry(entry_t *list_ptr, int match)
{
	while (list_ptr != (entry_t*) 0)
	{
		if (list_ptr->value == match)
		{
			return (list_ptr);
		}
		else
		{
			list_ptr = list_ptr->next;
		}
	}
	
	return (entry_t*) 0;
}

int main(void)
{
	entry_t n1, n2, n3;
	entry_t *list_ptr;
	entry_t *list_start = &n1;
	
	int search;
	
	n1.value = 100;
	n1.next = &n2;
	
	n2.value = 200;
	n2.next = &n3;
	
	n3.value = 300;
	n3.next = 0;
	
	printf("Enter value to locate: ");
	scanf("%i", &search);
	
	list_ptr = find_entry(list_start, search);
	
	if (list_ptr != (struct entry *) 0)
	{
		printf("Found %i.\n", list_ptr->value);
	}
	else
	{
		printf("Not found.\n");
	}
	
	return 0;
}
