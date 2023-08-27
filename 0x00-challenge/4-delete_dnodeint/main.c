#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code for Holberton School students.
 * add_nodes - function is responsible for adding nodes to the list
 * delete_nodes - function deletes a node at a specified index and printing the list
 *
 * Return: Always EXIT_SUCCESS.
 */

void add_nodes(dlistint_t **head)
{
add_dnodeint_end(head, 0);
add_dnodeint_end(head, 1);
add_dnodeint_end(head, 2);
add_dnodeint_end(head, 3);
add_dnodeint_end(head, 4);
add_dnodeint_end(head, 98);
add_dnodeint_end(head, 402);
add_dnodeint_end(head, 1024);
}

void delete_nodes(dlistint_t **head, int index)
{
delete_dnodeint_at_index(head, index);
print_dlistint(*head);
printf("-----------------\n");
}

int main(void)
{
dlistint_t *head = NULL;

add_nodes(&head);

delete_nodes(&head, 5);
delete_nodes(&head, 0);
delete_nodes(&head, 0);
delete_nodes(&head, 0);
delete_nodes(&head, 0);
delete_nodes(&head, 0);
delete_nodes(&head, 0);
delete_nodes(&head, 0);
delete_nodes(&head, 0);
delete_nodes(&head, 0);
delete_nodes(&head, 0);
delete_nodes(&head, 0);
delete_nodes(&head, 0);
delete_nodes(&head, 0);
delete_nodes(&head, 0);
delete_nodes(&head, 0);
delete_nodes(&head, 0);

free_dlistint(head);
return (0);
}
