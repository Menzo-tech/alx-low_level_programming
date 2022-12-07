#include <stdlib.h>
#include "lists.h"

/**
 * free_list - function that frees a list_t list
 * @head: pointer to the header (first node of the list)
 * Return: nothing
 */

void free_list(list_t *head)
{
	list_t *temp;
