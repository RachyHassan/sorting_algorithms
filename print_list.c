#include <stdio.h>
#include "sort.h"

/**
 * print_list - prints a list of integers
 *
 * @list: list to be printed
 */

void print_list(const listint_t *list)
{
	int v;

	v = 0;
	while (list)
	{
		if (v > 0)
			printf(", ");
		printf("%d", list->n);
		++v;
		list = list->next;
	}
	printf("\n");
}
