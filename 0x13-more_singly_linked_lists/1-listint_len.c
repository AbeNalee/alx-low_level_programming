#include "lists.h"
/**
 * listint_len - return number of elements in a linkedlist
 * @h: head
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
